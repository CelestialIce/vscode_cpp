#include <cstring>
#include <iostream>
using namespace std;
int res[92][8];
int cnt=0;
int path[8];

void dfs(int n)
{
    if(n>7){
        for(int i=0;i<8;i++)
            res[cnt][i]=path[i];
        cnt++;
        return;
    }
    for(int i=1;i<=8;++i){
        int k;
            for(k=0;k<n;k++){
                if((path[k]==i)||abs(i-path[k])==abs(k-n))
                    break;
            }
            if(k==n){
                path[n]=i;
                dfs(n+1);
            }
    }
}
int main()
{
    dfs(0);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        for(int i=0;i<8;i++) cout<<res[n-1][i];//修改索引,不然没用
        cout<<endl;
    }
    return 0; 
}