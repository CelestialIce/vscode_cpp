#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int num_yellow=0, num_red=0,flagr=0,flagy=0;
        while(n--){
            char ch;
            cin>>ch;
            if(ch=='R')
                num_red++;
            if(ch=='Y')
                num_yellow++;
            if(ch=='B')
                flagr++;
            if(ch=='L')
                flagy++;
        }
        cin.get();
        if(num_red!=7&&flagr==1||num_yellow==7&&flagy==1)
            cout << "Yellow" << endl;
        if(num_yellow!=7&&flagy==1||num_red==7&&flagr==1)
            cout << "Red" << endl;
    }



    return 0;
}
