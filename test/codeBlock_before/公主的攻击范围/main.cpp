#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;
#define N 1007

typedef pair<int,int> PII;

//战斗区域
char area[N][N];
//点位1的距离位0,计算1的点出发抵达的每个0的最距离
int dist[N][N], n, m;
//四个方向向量
int dx[]={-1,0,1,0},dy[]={0,-1,0,-1};
//打印Dist内容
void printDistMap(int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<dist[i][j]<<' ';
        cout<<endl;
    }
}
//!多原点广搜
void bfs(){
    queue<PII> q;   //BFS使用的队列
    memset(dist,-1,sizeof(dist));//初始化
    //扫描找到所有为1的点的坐标
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(area[i][j]=='1'){
                dist[i][j]=0;
                q.push(make_pair(i,j));//压入队列,多源点广搜
            }
        }
    }
    //开始广搜
    while(q.size()){
        auto t=q.front();//栈顶
        q.pop();

        for(int i=0;i<4;i++){//向四个方向尝试
        //拓展t得到下一个坐标格
            int x=t.first+dx[i],y=t.second+dy[i];
           //如果{x,y}非法就continue
            if(x<0||x>=n||y<0||y>=m||dist[x][y]!=-1) continue;
            //合法就更新next节点距离并且
            dist[x][y]=dist[t.first][t.second]+1;
            q.push({x,y});//把x,y点压入队列
        }
    }//end of while
}//end of bfs

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>area[i];
    bfs();
    printDistMap(n,m);
    return 0;
}
