#include <iostream>
#include <vector>

int main() {
    // 定义一个空向量
    std::vector<int> v1;

    // 定义一个包含5个元素的向量，并用0初始化
    std::vector<int> v2(5, 0);

    // 定义一个包含5个元素的向量，元素值随机
    std::vector<int> v3(5);

    // 向v1向量末尾添加元素
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    // 通过索引访问向量中的元素
    std::cout << "v1[0]: " << v1[0] << std::endl;

    // 使用迭代器遍历向量中的元素
    std::cout << "v1: ";
    for (auto i = v1.begin(); i != v1.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    // 使用范围for循环遍历向量中的元素
    std::cout << "v2: ";
    for (auto i : v2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
