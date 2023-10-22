#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string a;
    cin>>n;
    cin.get();
    while(n--){
        getline(cin,a);
        a.erase(0,6);
        cout<<'6'<<a<<endl;
    }
    return 0;
}
