#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    int n;
    cin>>n;
    cin.get();
    while(n--){
        getline(cin,s1);
        getline(cin,s2);
        int len=s1.size();
        s1.insert(len/2,s2);
        cout<<s1<<endl;
    }


    return 0;
}
