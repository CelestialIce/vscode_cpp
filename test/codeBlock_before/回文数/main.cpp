#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    while(getline(cin,s1)){
        s2.clear();
        for(int i=s1.size()-1;i>=0;i--){
            s2.push_back(s1[i]);
        }
        if(s1==s2)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }


    return 0;
}
