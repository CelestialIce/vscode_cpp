#include <iostream>

using namespace std;

void move(int id,char start, char target)
{
    cout<<id<<':'<<start<<"->"<<target<<endl;
}

void Hanoi(int n,int id, char start, char other, char target)
{
    if(n==1){
        move(id,start,target);
        return ;
    }
    else{
        Hanoi(n-1,id,start,target,other);
        int newid=id+n-1;
        move(newid,start,target);
        Hanoi(n-1,id,other,start,target);
    }

}

int main()
{
    int n;
    cin>>n;
    char start,other,target;
    cin>>start>>other>>target;
    Hanoi(n,1,start,other,target);

    return 0;
}