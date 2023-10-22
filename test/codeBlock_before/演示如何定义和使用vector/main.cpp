#include <iostream>
#include <vector>

int main() {
    // ����һ��������
    std::vector<int> v1;

    // ����һ������5��Ԫ�ص�����������0��ʼ��
    std::vector<int> v2(5, 0);

    // ����һ������5��Ԫ�ص�������Ԫ��ֵ���
    std::vector<int> v3(5);

    // ��v1����ĩβ���Ԫ��
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    // ͨ���������������е�Ԫ��
    std::cout << "v1[0]: " << v1[0] << std::endl;

    // ʹ�õ��������������е�Ԫ��
    std::cout << "v1: ";
    for (auto i = v1.begin(); i != v1.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    // ʹ�÷�Χforѭ�����������е�Ԫ��
    std::cout << "v2: ";
    for (auto i : v2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
