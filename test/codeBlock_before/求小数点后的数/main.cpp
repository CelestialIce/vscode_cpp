#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int n=0;
    int d=0, i=0,flag=0;
    cin>>n;
    while(n--){
        cin>>a;
        cin>>d;
        int note=0;
        while(a[note]!='.')
            note++;
        a.erase(0,note);
        cout<<a[d]<<endl;
    }

    return 0;
}
