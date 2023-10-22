#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, p;
    cin >> N >> p;
    vector<int> circle(N);
    for (int i = 0; i < N; ++i) {
        circle[i] = i + 1;  // 初始化圈内的人的原序号
    }
    int currentIndex = 0;
    while (N > 0) {
        currentIndex = (currentIndex + p - 1) % N; // 计算报数的位置
        // 输出退出的人的原序号
        cout << circle[currentIndex];
        // 如果不是最后一个退出的人，加上空格
        if (N > 1) {
            cout << " ";
        }
        // 移除退出的人
        circle.erase(circle.begin() + currentIndex);
        N--;
    }
    cout << endl;
    return 0;
}
