#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int n=1, m=1, len=a.size();
    for(int i=0;i<len-1;i++){
        for(int j=i+1;a[j]!=a[i]&&j<len;j++)
            n++;
        if(n>m){
            m=n;
            n=1;
        }
    }
    cout<<m<<endl;

    return 0;
}
