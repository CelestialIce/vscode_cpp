#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.get();
    string str;
    while(n--)
    {
        getline(cin,str);
        int len=str.size(), upper=0, lower=0, number=0, special=0;
        if(len<8||len>16)
            cout<<"NO"<<endl;
        else {
        for(int i=0;i<len;i++){
            if(islower(str[i]))
                lower=1;
            if(isdigit(str[i]))
                number=1;
            if(isupper(str[i]))
                upper=1;
            if(str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^')
                special=1;
            if(lower+number+upper+special>=3){
                cout<<"YES"<<endl;
                break;
            }
            else if(i==len-1)
                cout<<"NO"<<endl;
        }
        }

    }

    return 0;
}
