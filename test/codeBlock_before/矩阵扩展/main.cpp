#include <iostream>

using namespace std;

int main()
{
    int a[35][35]={0};
    int y,x;
    int flag1=0 ,flag2=0;
    cin >> y >> x;
    for(int i=0;i<y;i++)
        for(int j=0;j<x;j++)
            cin>>a[i][j];

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            if(j==0){
                cout<<a[i][j]<<' ';
            }
            cout<<a[i][j]<<' ';
            if(j==x-1)
                cout<<a[i][j];
        }
        if(flag2==0)
            cout <<endl;
        if(flag1==0&&i==0){
            flag1++;
            i--;
            continue;
        }
        if(flag2==0&&i==y-1){
            flag2++;
            i--;
            continue;
        }
    }


    return 0;
}

/*
3 3
1 2 3
4 5 6
7 8 9

24 3
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
1 2 3
4 5 6
7 8 9
/*

    int xlength, ylength;
    cin >> xlength >> ylength;
    int **a=NULL;
    a=new int *[xlength]
    for(int i = 0;i<xlength;i++)
        a[i]=new int [ylength];
    for(int i=0;i<ylength;i++){
        for(int j=0;j<xlength;j++){

        }
    }




    for(int i=0;i<xlength;i++)
        delete [] a[i];
    delete a;



 */

