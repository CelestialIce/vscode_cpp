// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     // 初始化一个长度为 n 的数组用于存储每个数字的出现次数
//     vector<int> count(n + 1, 0);  // 因为候选人编号从 1 开始，所以数组长度为 n+1

//     // 读取选票并更新 count 数组
//     for (int i = 0; i < m; ++i) {
//         int x;
//         cin >> x;
//         count[x]++;
//     }

//     // 输出排序后的选票
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 0; j < count[i]; ++j) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> count(n+1,0);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        count[x]++;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<count[i];j++){
            cout<<i<<" ";
        }
    }

    return 0;
}