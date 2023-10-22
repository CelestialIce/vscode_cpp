#include <bitset>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> res;

void dfs(int u)
{
    bitset<16> a(u);
    bool isFirstOne=true;
    for(int i=15;i>=0;--i){
        if(a.test(i)){
            if(!isFirstOne)
                res.push_back("+");
            else
                isFirstOne=false;
            if(i==0)
                res.push_back("2(0)");
            else if(i==1)
                res.push_back("2");
            else{
                res.push_back("2(");
                dfs(i);
                res.push_back(")");
            }
        }
    }
}

int main()
{
    int x;
    cin>>x;
    dfs(x);
    for(auto l:res) cout<<l;
    cout<<endl;
    return 0;
}