#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;
#define N 1007

typedef pair<int,int> PII;

//ս������
char area[N][N];
//��λ1�ľ���λ0,����1�ĵ�����ִ��ÿ��0�������
int dist[N][N], n, m;
//�ĸ���������
int dx[]={-1,0,1,0},dy[]={0,-1,0,-1};
//��ӡDist����
void printDistMap(int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<dist[i][j]<<' ';
        cout<<endl;
    }
}
//!��ԭ�����
void bfs(){
    queue<PII> q;   //BFSʹ�õĶ���
    memset(dist,-1,sizeof(dist));//��ʼ��
    //ɨ���ҵ�����Ϊ1�ĵ������
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(area[i][j]=='1'){
                dist[i][j]=0;
                q.push(make_pair(i,j));//ѹ�����,��Դ�����
            }
        }
    }
    //��ʼ����
    while(q.size()){
        auto t=q.front();//ջ��
        q.pop();

        for(int i=0;i<4;i++){//���ĸ�������
        //��չt�õ���һ�������
            int x=t.first+dx[i],y=t.second+dy[i];
           //���{x,y}�Ƿ���continue
            if(x<0||x>=n||y<0||y>=m||dist[x][y]!=-1) continue;
            //�Ϸ��͸���next�ڵ���벢��
            dist[x][y]=dist[t.first][t.second]+1;
            q.push({x,y});//��x,y��ѹ�����
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
