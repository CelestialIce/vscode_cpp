#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int N;
vector<int> res;

void printMap(vector<int> res)
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j+1==res[i])//又要好好注意输出端
                cout<<'Q';
            else
                cout<<'.';
        }
        cout<<endl;
    }
    cout<<endl;
}

void dfs(int n)
{
    if(n==N){
        /*
        for(auto x:res) cout<<x;
        cout<<endl; //另一道题
        */
        printMap(res);
        return ;
    }
    for(int i=1;i<=N;i++){
        int k;
        for(k=0;k<n;k++){
            if((res[k]==i)||abs(i-res[k])==abs(k-n))//括号打错了,下次注意
            break;
        }
        if(k==n){
            res[n]=i;
            dfs(n+1);
        }
    }
}


int main()
{
    cin>>N;
    res.resize(N);//注意res为vector容器,需要重新确定大小才行;
    dfs(0);
    return 0;
}