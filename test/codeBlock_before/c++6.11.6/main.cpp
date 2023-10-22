#include <iostream>
#include<string>
#include<cmath>

using namespace std;

struct Patrons{
    string name;
    double donate;
};

int main()
{
    int n;
    cin>>n;
    cin.get();
    Patrons *pp=new Patrons[n];
    for(int i=0;i<n;i++){
        cin>>pp[i].name;
        cin>>pp[i].donate;
        cin.get();
    }
    int m=0;
    cout<<"Grand Patrons:"<<endl;
    for(int i=0;i<n;i++){
            if(pp[i].donate>10000){
                cout<<"  "<<pp[i].name<<"  "<<pp[i].donate<<endl;
                m++;
            }
    }
    if(abs(m)<1e-6)
        cout<<"none"<<endl;
    m=0;
    cout<<"Patrons:"<<endl;
    for(int i=0;i<n;i++){
            if(pp[i].donate<=10000&&pp[i].donate>0){
                cout<<"  "<<pp[i].name<<"  "<<pp[i].donate<<endl;
                m++;
            }
    }
    if(abs(m)<1e-6)
        cout<<"none"<<endl;

    return 0;
}
/*
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
 */

