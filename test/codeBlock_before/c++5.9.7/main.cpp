#include <iostream>
#include<string>
using namespace std;
struct car{
    string manu;
    int year;
};

int main()
{
    int n=0;
    cout<<"How many cars do you wish to catalog?";
    cin >>n;
    cin.get();//原来是你，在输入之前就有空格了
    car *cp=new car[n];
    for(int i=0;i<n;i++){
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make:";
        getline(cin,cp[i].manu);
        cout<<"please enter the year made:";
        cin>>cp[i].year;
        cin.get();
    }
    cout<<"Here is your collection:"<<endl;
    for(int i=0;i<n;i++){
        cout<<cp[i].year<<" "<<cp[i].manu<<endl;
    }


    return 0;
}
