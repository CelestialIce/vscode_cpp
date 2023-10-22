#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    while(getline(cin,a)&&a[0]!='#'&&a.size()!=1){
        int len=a.size();
        int num=0;
        for(int i=0;i<len;i++){
            if(a[i]=='o'){
                if(num%2)
                    cout<<'0'<<endl;
                else
                    cout<<'1'<<endl;
            }
            else if(a[i]=='e'){
                if(num%2)
                    cout<<'1'<<endl;
                else
                    cout<<'0'<<endl;
            }
            else if(a[i]=='1'){
                num++;
                cout<<a[i];
            }
            else
                cout<<a[i];
        }
    }


    return 0;
}
