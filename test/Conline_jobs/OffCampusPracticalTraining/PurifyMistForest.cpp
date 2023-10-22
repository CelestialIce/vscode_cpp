#include <iostream>
#define xa x + a[i]
#define ya y + b[i]
using namespace std;

int graph[21][21];
int w = 0, h = 0;
int X1 = 0, Y1 = 0, cnt = 0;
const int a[] = {-1, 0, 1, 0}, b[] = {0, -1, 0, 1};

//深搜
void dfs(int x, int y){
    graph[x][y] = 0;
    cnt++;
    for(int i = 0; i < 4; i++){
        if(graph[xa][ya] == 1 && xa > 0 && xa <= w && ya > 0 && ya <= h) 
        dfs(xa, ya);
    }
    //此处无需回溯，直接结束即可
}

void get(){
    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= h; j++){
            char a;
            cin >> a;
            if(a == '#') graph[i][j] = 0;
            else if(a == '.') graph[i][j] = 1;
            else if(a == '@'){
                X1 = i, Y1 = j;		//记录起点坐标
                graph[i][j] = 1;
            }
        }
    }
    dfs(X1, Y1);
    cout << cnt << endl;
    cnt = 0;
}

int main(){
    while(1){
        cin >> h >> w;
        //读到终止符即停止
        if(h == 0 && w == 0) break;
        get();
    }
    return 0;
}

