#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    cin.get();
    while(n--){
        getline(cin,s);
        int len=s.size();
        int a=0, e=0, I=0, o=0, u=0;
        for(int i=0;i<len;i++){
            if(s[i]=='a'||s[i]=='A')
                a++;
            if(s[i]=='e'||s[i]=='E')
                e++;
            if(s[i]=='i'||s[i]=='I')
                I++;
            if(s[i]=='o'||s[i]=='O')
                o++;
            if(s[i]=='u'||s[i]=='U')
                u++;
        }
        cout<<"a:"<<a<<endl;
        cout<<"e:"<<e<<endl;
        cout<<"i:"<<I<<endl;
        cout<<"o:"<<o<<endl;
        cout<<"u:"<<u<<endl;
        if(n!=0)cout<<endl;
    }
    return 0;
}
