#include <algorithm>
#include <cstring>
#include <functional>
#include <iostream>
#include <cmath>

using namespace std;

int oriClocks[9];
int clocks[9];

string moves[9]={"ABDE","ABC","BCEF","ADG",
                "BDEFH","CFI","DEGH","GHI","EFHI"};
int moveTimes[9]={0};
int minTimes=1<<30;
int result[9];

void dfs(int n) {
    if (n >= 9) {
        memcpy(clocks, oriClocks, sizeof(clocks));
        int times = 0;
        for (int i = 0; i < 9; i++) {
            if (moveTimes[i]) {
                for (int k = 0; k < moves[i].size(); ++k) {
                    clocks[moves[i][k] - 'A'] =
                     (clocks[moves[i][k] - 'A'] + moveTimes[i]) % 4;
                    times += moveTimes[i];
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < 9; ++i) {
            if (clocks[i] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            if (minTimes > times) {
                minTimes = min(minTimes, times);
                memcpy(result, moveTimes, sizeof(result));
            }
            return;
        }

        for (int i = 0; i < 4; i++) {
            moveTimes[n] = i;
            dfs(n + 1);
        }
    }
    return;
}

int main()
{
    for(int i=0;i<9;++i) cin>>oriClocks[i];
    dfs(0);
    for (int i = 0; i < 9; ++i) {
        for (int k = 0; k < result[i]; ++k) {
            cout << i + 1 << ' ';
        }
    }

    return 0;
}
