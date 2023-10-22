#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string str;
    int flag=0;
    while(getline(cin,str)){
    for(int i=0;i<str.size();i++){
        if(flag==0&&isalpha(str[i])){
            flag=1;
            str[i]=toupper(str[i]);
        }
        else if(flag==1&&isalpha(str[i]))
            str[i]=tolower(str[i]);
         if((str[i])==' ')
            flag=0;
    }
    flag=0;
        cout << str << endl;
    }

    return 0;
}
