#include <iostream>

using namespace std;

const int N=10;
int path[N]{0};
bool condition[N]{0};

void dfs(int n,int x)
{
    if(x==n){
        for(int i=0;i<n;i++) {
            cout<<path[i]<<' ';
        }
        cout<<endl;
        return;
    }
    
    for(int i=1;i<=n;i++){
        if(!condition[i]){
            condition[i]=true;
            path[x]=i;
            dfs(n,x+1);
            condition[i]=false;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    dfs(n,0);

    return 0;
}