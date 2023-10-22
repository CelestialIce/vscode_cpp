#include <iostream>
using namespace std;
template <typename T>
void Myswap(T &x,T &y){
    T temp=x;
    x=y;
    y=temp;
}

template <typename T>
void Myswap(T *x,T *y){
    T temp=*x;
    *x=*y;
    *y=temp;
}


int main()
{
    int x,y;
    cout << "use reference(input 0 0 to end)" << endl;
    while(cin>>x>>y&&x!=0||y!=0){
        Myswap(x,y);
        cout << x << " " <<  y << endl;
    }
       cout << "use point(input 0 0 to end)" << endl;
    while(cin>>x>>y&&x!=0||y!=0){
        Myswap(&x,&y);
        cout << x << " " <<  y << endl;
    }
    
return 0;
}
