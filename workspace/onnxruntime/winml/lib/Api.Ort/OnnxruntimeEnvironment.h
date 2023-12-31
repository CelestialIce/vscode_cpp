// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#pragma warning(push)
#pragma warning(disable : 4505)

namespace _winml {

class OnnxruntimeEnvironment {
 public:
  OnnxruntimeEnvironment(const OrtApi* ort_api);
  ~OnnxruntimeEnvironment();
  HRESULT GetOrtEnvironment(_Out_ OrtEnv** ert_env);
  HRESULT EnableDebugOutput(bool is_enabled);

 private:
  void RegisterSuspendHandler();

 private:
  UniqueOrtEnv ort_env_;
  winrt::event_token suspend_token_;
};

const OrtApi* GetVersionedOrtApi();
const WinmlAdapterApi* GetVersionedWinmlAdapterApi();

}  // namespace _winml

#pragma warning(pop)
