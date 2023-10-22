#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector;
    int num;
    std::cout << "Enter numbers (-1 to stop): ";
    std::cin >> num;
    while (num != -1) {
        myVector.push_back(num);
        std::cin >> num;
    }
    int sum = 0;
    for (int i = 0; i < myVector.size(); i++) {
        sum += myVector[i];
    }
    double average = static_cast<double>(sum) / myVector.size();
    std::cout << "Average: " << average << std::endl;
    return 0;
}
