#include <iostream>
#include<cstring>
using namespace std;



void show(char a){
    switch (a){
        case '-':cout<<"fu";break;
        case '1':cout<<"yi";break;
        case '2':cout<<"er";break;
        case '3':cout<<"san";break;
        case '4':cout<<"si";break;
        case '5':cout<<"wu";break;
        case '6':cout<<"liu";break;
        case '7':cout<<"qi";break;
        case '8':cout<<"ba";break;
        case '9':cout<<"jiu";break;
        case '0':cout<<"ling";break;
    }
}

int main()
{
    char arr[50]={0};
    cin>>arr;
    int l=strlen(arr);
    for(int i=0;i<l;i++){
        show(arr[i]);
        if(i+1<l)
            cout<<' ';
    }



    return 0;
}
