#include <iostream>
using namespace std;

inline int add (int a, int b){
    return a+b ;
}

int main()
{
    for(int i=0;i<10;i++){
        cout << add(i,i) << ' ';
        if((i+1)%5==0)
            cout << endl;
    }
    return 0;
}

