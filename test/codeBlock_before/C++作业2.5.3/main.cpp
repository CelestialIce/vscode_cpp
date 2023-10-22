#include <iostream>
#include <string>

using namespace std;

int isdigit(char ch)
{
    if(ch>='0'&&ch<='9')
        return 1;
    else
        return 0;
}

int main()
{
    string str;
    int sum=0;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i]))
            sum++;
    }
    cout<<sum;

    return 0;
}
