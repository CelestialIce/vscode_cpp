// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "core/common/common.h"
#include "core/graph/graph_viewer.h"
#include "core/framework/op_kernel.h"
#include "core/optimizer/graph_transformer.h"
#include "core/framework/kernel_registry_manager.h"
#include "core/framework/kernel_registry.h"

namespace onnxruntime {

/**
@Class InsertCastTransformer

Transformer to insert cast node that casts float16 to float for cpu nodes
*/
class InsertCastTransformer : public onnxruntime::GraphTransformer {
 public:
  /**
   * @brief Initializer
   * @param name                    for logging purpose
   * @param cpu_kernel_registry     used to query whether an op node can be safely created
   */
  InsertCastTransformer(const std::string& name, const KernelRegistry* cpu_kernel_registry)
      : onnxruntime::GraphTransformer(name),
        cpu_kernel_registries_(cpu_kernel_registry),
        force_cpu_fp32_(cpu_kernel_registry != nullptr) {}

 private:
  Status ApplyImpl(onnxruntime::Graph& graph, bool& modified, int graph_level, const logging::Logger& logger) const override;
  bool NeedInsertCast(const onnxruntime::Node* node, const onnxruntime::NodeArg* input) const;

  const KernelRegistry* cpu_kernel_registries_;

  // Currently because we only have very few cpu kernels support float16, place those nodes on float16
  // will introduce many cast between fp32 and fp16, which will slow the execution.
  // A better solution is to have a cost model to evaluate does it works to place the node on float16.
  // Here for simplify, we only force the single-node-float16 sub-graph to float32
  const bool force_cpu_fp32_;
};
}  // namespace onnxruntime
