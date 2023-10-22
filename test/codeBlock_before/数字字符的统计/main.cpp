#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;
    cin.get();
    while(n--){
        int sum=0;
        getline(cin,a);
        int len=a.size();
        for(int i=0;i<len;i++){
            if(isdigit(a[i]))
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
