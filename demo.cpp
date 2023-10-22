
// /*
//  * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights
//  reserved.
//  * Note: 缺省代码仅供参考，可自行决定使用、修改或删除
//  */
// #include <iostream>
// #include <list>
// #include <string>
// #include <vector>
// using namespace std;

// class Solution {
//  public:
//   string GetCurrentDirectory(const vector<string>& cmds) {
//     string currentPath;
//     vector<string> cmd;
//     vector<string> cmd_last;
//     for (int i = 0; i < cmds.size(); i++) {
//       vector<string> li;
//       vector<string> li_last;
//       string s = cmds[i];
//       for (int j = 3; j < cmds[i].length() - 1; j++) {
//         /*if (s[j] == '.' && s[j + 1] != '.')
//             continue;*/
//         if (s[j] == '/') {
//           continue;
//         }
//         string word;
//         string temp;
//         while (s[j] >= 'a' && s[j] <= 'z' || s[j] == '.' || s[j] == '-') {
//           temp += s[j++];
//         }
//         word += temp;
//         li.push_back(word);
//       }
//       if (li.empty()) {
//         li_last = li;
//         li.push_back("home");
//         li.push_back("user");
//       }
//       if (i == 0) {
//         cmd = li;
//         cmd_last = cmd;
//         li_last = li;
//       }
//       if (cmds[i][3] != '/' && i) {
//         cmd = cmd_last;
//         int k = cmd.size();
//         for (int j = 0; j < li.size(); j++) cmd.push_back(li[j]);
//       }
//       if (cmds[i][3] == '/') {
//         cmd = li;
//         cmd_last = cmd;
//       }
//     }
//     if (cmd[0] == "-") {
//       swap(cmd, cmd_last);
//     }
//     for (int j = 0; j < cmd.size(); j++) {
//       if (cmd[j] == ".")
//         ;
//       if (cmd[j] == "..") {
//         auto it1 = cmd.begin() + j - 1, it2 = cmd.begin() + j + 1;
//         cmd.erase(it1, it2);
//       }
//     }
//     cmd_last = cmd;
//     for (int j = 0; j < cmd.size(); j++) {
//       currentPath += ("/" + cmd[j]);
//     }
//     return currentPath;
//   }
// };

// int main() {
//   string line;
//   getline(cin, line);
//   int num = stoi(line);
//   vector<string> cmds;
//   for (int loop = 0; loop < num; loop++) {
//     getline(cin, line);
//     cmds.push_back(line);
//   }
//   Solution parser;
//   cout << parser.GetCurrentDirectory(cmds) << endl;
//   return 0;
// }
#include <iomanip>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  map<int, double, greater<int>> A, B, O, R;

  int n, exp;
  double coef;

  // 输入多项式 A
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> exp >> coef;
    A[exp] = coef;
  }

  // 输入多项式 B
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> exp >> coef;
    B[exp] = coef;
  }

  // 多项式长除法
  while (!A.empty() && A.begin()->first >= B.begin()->first) {
    int exp_o = A.begin()->first - B.begin()->first;
    double coef_o = A.begin()->second / B.begin()->second;
    O[exp_o] = coef_o;

    for (const auto &term : B) {
      int exp_r = term.first + exp_o;
      double coef_r = term.second * coef_o;
      A[exp_r] -= coef_r;
      if (abs(A[exp_r]) < 1e-5) {
        A.erase(exp_r);
      }
    }
  }

  // 结果输出
  if (O.empty()) {
    cout << "0 0 0.0" << endl;
  } else {
    cout << O.size();
    for (const auto &term : O) {
      cout << " " << term.first << " " << fixed << setprecision(1)
           << term.second;
    }
    cout << endl;
  }

  if (A.empty()) {
    cout << "0 0 0.0" << endl;
  } else {
    cout << A.size();
    for (const auto &term : A) {
      cout << " " << term.first << " " << fixed << setprecision(1)
           << term.second;
    }
    cout << endl;
  }
  return 0;
}  
