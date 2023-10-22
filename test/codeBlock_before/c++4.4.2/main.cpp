#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    char s2[20]={0};

    cout << "What is your first name? " ;
    getline(cin,s1) ;
    cout<<"What is your last name? ";
    cin.getline(s2,20);

    cout <<"Name : "<<s2<<" , "<<s1<<endl;


    return 0;
}
