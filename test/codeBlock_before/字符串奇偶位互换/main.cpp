#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int n;
    cin>>n;
    while(n--){
        cin>>a;
        int len=a.size();
        for(int i=0;i+1<len;i+=2){
            char t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }

        cout<<a<<endl;
    }
    return 0;
}
