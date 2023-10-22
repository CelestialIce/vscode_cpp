#include <iostream>
using namespace std;
 
int p, q;
char resx[26], resy[26];
int dy[8] = {-2, -2, -1, -1, 1, 1, 2, 2}, dx[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
 
//判断该点是否走过
int judge(int x, int y, int pos) {
    for (int i = 0; i <= pos; i++) {
        if (x == resx[i] && y == resy[i]) return 0;
    }
    return 1;
}
 
int plat(int r, int l, int pos) {
    resy[pos] = l + 65;
    resx[pos] = r + 49;
    //是否遍历所有格子
    if (pos == p * q - 1) return 1;
    //向八个走法搜索
    for (int i = 0; i < 8; i++) {
        int x = r + dx[i], y = l + dy[i];
        //判断边界
        if (x >= 0 && x < p && y >= 0 && y < q && judge(x + 49, y + 65, pos)) {
            resy[pos + 1] = y + 65;
            resx[pos + 1] = x + 49;
            if(plat(x, y, pos + 1)) return 1;
        }
    }
    return 0;
}
 
int main()
{
    int n, temp = 1;
    cin >> n;
    while (n--) {
        cin >> p >> q;
        cout << '#' << temp << ':' << endl;
        if (plat(0, 0, 0)) {
            for (int i = 0; i < p * q; i++) printf("%c%c", resy[i], resx[i]);
            cout << endl; 
        }
        else cout << "none" << endl;
        temp++;
    }
    return 0;
}