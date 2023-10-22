#include <iostream>
const int strsize=30;
const int num=4;
struct Bene{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
using namespace std;

int main()
{
    Bene Names[num]
    {
        {"hahaha","jajaja","nanana",0},
        {"mamama","bababa","papapa",1},
        {"lalala","kakaka","gagaga",2},
        {"yayaya","rarara","wawawa",1}
    };

    cout << "Benevolent Order of Programmers Report" << endl;
    cout <<"a. display by name     b.display by title"<<endl;
    cout <<"c. display by bopname  d.display by preference"<<endl;
    cout <<"q.quit"<<endl;
    cout <<"Enter your choice:";
    char ch;
    cin>>ch;
    while(1){
        if(ch=='q')
            break;
        switch(ch){
        case 'a':
            for(int i=0;i<num;i++){
                cout<<Names[i].fullname<<endl;
            }
            break;
        case 'b':
            for(int i=0;i<num;i++){
                cout<<Names[i].title<<endl;
            }
            break;
        case 'c':
            for(int i=0;i<num;i++){
                cout<<Names[i].bopname<<endl;
            }
            break;
        case 'd':
            for(int i=0;i<num;i++){
                    if(Names[i].preference==0)
                        cout<<Names[i].fullname<<endl;
                    if(Names[i].preference==1)
                        cout<<Names[i].title<<endl;
                    if(Names[i].preference==2)
                        cout<<Names[i].bopname<<endl;
            }
            break;
        }
        cout<<"Next choice:";
        cin >>ch;
        continue;
    }

    return 0;
}
