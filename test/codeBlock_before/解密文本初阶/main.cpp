#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string str;
    int flag=0;
    while(getline(cin,str)){
        if(str=="START"&&flag!=1){
            flag=1;
            //cout<<"START"<<endl;
            continue;
        }
        if(str=="END"&&flag!=0){
            flag=0;
            //cout<<"END"<<endl;
            continue;
        }

        if(str=="ENDOFINPUT"){
           // cout<<"ENDOFINPUT"<<endl;
            break;
        }

        if(flag){
            for(int i=0;i<str.size();i++){
               if(isalpha(str[i])){
                str[i]-=5;
                if(str[i]<'A')
                    str[i]+=26;
                }
               }
            cout<<str<<endl;
        }
    }
    return 0;
}
