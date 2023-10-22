#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a)){
        int len=a.size();
        char ch='A';
        for(int i=0;i<len;i++){
            if(a[i]>ch)
                ch=a[i];
        }
        for(int i=0;i<len;i++){
            if(a[i]==ch)
                cout<<a[i]<<"(max)";
            else
                cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
