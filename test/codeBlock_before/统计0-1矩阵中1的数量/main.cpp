#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int x,y;
        int a;
        cin>>y>>x;
        int sum=0;
        for(int i=0;i<y;i++)
            for(int j=0;j<x;j++){
                cin>>a;
                if(a==1)
                    sum++;
            }
        cout << sum << endl;
    }



    return 0;
}
