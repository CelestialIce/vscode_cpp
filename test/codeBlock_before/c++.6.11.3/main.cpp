#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter one of the following chioces:" << endl;
    cout <<"c) carnivore        p) pianist"<<endl;
    cout <<"t) tree             g) game"<<endl;
    char ch;
    while(cin>>ch){
        while(ch!='t'&&ch!='c'&&ch!='p'&&ch!='g'){
            cout<<"Please enter a c,p,t,or g:";
            cin>>ch;
            continue;
        }
        switch(ch){
            case 'c':cout<<"I don't know what is carnivore"<<endl;break;
            case 'p':cout<<"Pianist is a instrument"<<endl;break;
            case 't':cout<<"A maple is a tree"<<endl;break;
            case 'g':cout<<"Kids like to play game"<<endl;break;
            default:break;
        }

    }

    return 0;
}
