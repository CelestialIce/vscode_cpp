#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    // 读取所有数字
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int start = 0, max_start = 0, max_end = 0;
    
    // 遍历数组找最长递增子序列
    for (int i = 1; i < n; ++i) {
        if (nums[i] <= nums[i - 1]) {
            // 检查是否需要更新最长递增子序列的起始和结束索引
            if (i - start > max_end - max_start) {
                max_start = start;
                max_end = i;
            }
            start = i;
        }
    }
    
    // 检查数组末尾的递增子序列
    if (n - start > max_end - max_start) {
        max_start = start;
        max_end = n;
    }
    
    // 输出最长递增子序列
    for (int i = max_start; i < max_end; ++i) {
        if (i > max_start) {
            cout << " ";
        }
        cout << nums[i];
    }
    cout << endl;
    
    return 0;
}
