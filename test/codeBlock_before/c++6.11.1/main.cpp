#include <iostream>
#include<cctype>

using namespace std;

int main()
{
    char ch;
    while((ch=cin.get())!='@'){
        if(isdigit(ch))
            continue;
         if(islower(ch)){
            cout<<char(toupper(ch));
            continue;
         }
         if(isupper(ch)){
            cout<<char(tolower(ch));
            continue;
         }
            cout<<ch;
    }

    return 0;
}
