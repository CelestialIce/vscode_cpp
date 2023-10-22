#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    char a;
    int b;
    cout << "What is your first name? " ;
    getline(cin,s1) ;
    cout<<"What is your last name? ";
    getline(cin,s2);
    cout<<"What letter grade do your deserve? ";
    cin>>a;
    cout<<"What is your age? ";
    cin>>b;
    cout <<"Name : "<<s2<<" , "<<s1<<endl;
    cout<<"Grade:"<<a<<endl;
    cout<<"Age:"<<b;

    return 0;
}
