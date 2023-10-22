#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

vector<string> ans;
string path;
vector<bool> used;

void dfs(int n, string line)
{
    if(n==line.size()){
        ans.push_back(path);
        return ;//记得return
        }
    for(int i=0;i<line.size();i++){//数组容器要从0开始
        if(used[i]==false){
            path[n]=line[i];
            used[i]=true;
            dfs(n+1,line);
            used[i]=false;
        }
    }
}

int main()
{
    string line;
    cin>>line;
    sort(line.begin(),line.end());
    path=line;
    used=vector<bool>(line.size(),false);

    dfs(0,line);
    for(auto l:ans) cout<<l<<endl;

    return 0;
}