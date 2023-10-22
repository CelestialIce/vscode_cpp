#include <iostream>
#include <cstring>

using namespace std;

string Left[3];
string Right[3];
string result[3];

bool isFeitCoin(char iCoin,bool isLight){
    string c;
    c.push_back(iCoin);

    for(int i=0;i<3;i++){
        string l=Left[i],r=Right[i];
        if(!isLight) swap(l,r);

    switch(result[i][0]){
        case 'e':
            if(l.find(c)!=string::npos||r.find(c)!=string::npos)
                return false;
            break;
        case 'u':
            if(r.find(c)==string::npos)
                return false;
            break;
        case 'd':
            if(l.find(c)==string::npos)
                return false;
            break;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++)cin>>Left[i]>>Right[i]>>result[i];
        for(char iCoin='A';iCoin<='L';iCoin++){
            if(isFeitCoin(iCoin,true)){
                cout<<iCoin<<" is the counterfeit coin and it is light.  "<<endl;
                break;
            }
            else if (isFeitCoin(iCoin,false)){
                cout<<iCoin<<" is the counterfeit coin and it is light.  "<<endl;
                break;
            }
        }
    }



    return 0;
}
/*
3
ABCD EFGH even
ABCI EFJK up
ABIJ EFGH even
ABCD EFGH even
ABCI EFJK up
ABIJ EFGH even
ABCD EFGH even
ABCI EFJK up
ABIJ EFGH even

 */


