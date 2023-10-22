#include <cstring>
#include <iostream>
using namespace std;
const int N = 9;const int M = 3;
string memory[N]={
    "530070000",
    "600195000",
    "098000060",
    "800060003",
    "400803001",
    "700020006",
    "060000280",
    "000419005",
    "000080079",
};
int a[N][N],b[N][N];
bool st[N +1];

//判定输入数据是否合法
bool check_input(){
    string line;
    for(int i =0;i<N;++i){
        cin >> line;
        if(line.size()!= N) return false;//长度不对

        for(int j=0;j<N;j++){
            int t = line[j]-'0';//字符转换为整数
            if (t < 1 || t > N) {
                return false;
            }

            if(a[i][j]!=0&&a[i][j]!=t){
                return false;
            }
            b[i][j]=t;
        }
    }
    return true;
}
bool check_row(){
    for(int i =0; i<N; i++){
        memset(st, false, sizeof st);//清空st
        for(int j=0; j<N; j++){
            int t = b[i][j];// i,j
            if (t < 1 || t > N) {
                return false;
            }

            if(st[t])return false;
            st[t]= true;
        }
    }
    return true;
}
//判断每一列是否是合法数独
bool check_col(){
    for(int i =0; i<N; i++){
        memset(st, false, sizeof st);//清空st
        for(int j =0;j<N; j++){
            int t = b[j][i];// j,i
            if (t < 1 || t > N) {
                return false;
            }

            if(st[t])return false;
            st[t]= true;
        }
    }
    return true;
}
bool check_block(){
    for(int x =0;x<N;x+= M){
        for(int y=0;y<N;y += M){
        memset(st, false, sizeof st);
            for(int dx =0;dx<M;dx++){
                for(int dy =0;dy <M;dy++){
                int t = b[x+ dx][y +dy];
                if (t < 1 || t > N) {
                    return false;
                }
                if(st[t])return false;
                st[t]= true;

                }
            }
        }
    }
    return true;
}
int main(){

    for(int i=0;i<N;i++){
        for (int j = 0; j < N; j++)
        {
            a[i][j]=memory[i][j]-'0';
        }
    }
    if(check_input()&&check_col()&&check_row()&&check_block())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}