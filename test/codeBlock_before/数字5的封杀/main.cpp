#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string s;
    long long a[500];
    while(getline(cin,s)){
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='5')//一个开始的检验
                s[i]='f';
        }
        long long sum=0, cnt=0;
        for(int i=0;i<len;i++){
            if(i==0&&s[i]=='f'){
                i++;
            }

            if(s[i]=='f'&&s[i-1]!='f'){//一个末尾的检验
                a[cnt++]=sum;
                sum=0;
            }
            else if(s[i]=='f'&&s[i-1]!='f'||i==len-1){
                sum=sum*10+s[i]-'0';
                a[cnt++]=sum;
                sum=0;
            }
            else if(isdigit(s[i])){
                sum=sum*10+s[i]-'0';
            }


        }
        for(int i=0;i<cnt;i++){
            for(int j=0;j<cnt-i-1;j++){
                if(a[j]>a[j+1]){
                    int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
                }
            }
        }
        for(int i=0;i<cnt;i++){
            if(i==cnt-1)
                cout<<a[i]<<endl;
            else
                cout<<a[i]<<' ';
        }
    }

    return 0;
}


