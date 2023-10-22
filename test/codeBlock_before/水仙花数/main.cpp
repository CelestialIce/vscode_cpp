#include <iostream>

using namespace std;

int is_number_of_daffodils(int n){
    int a[3]={0};
    int temp=n;
    int sum=0;
    for(int i=0;i<3;i++){
        a[i]=n%10;
        n/=10;
    }
    for(int i=0;i<3;i++){
        sum+=a[i]*a[i]*a[i];
    }
    if(sum==temp)
        return temp;
    else
        return 0;

}

int main()
{
    int x, y;
    while(cin >> x >> y){
        int num=0;
        for(int i=x;i<=y;i++){
            if(is_number_of_daffodils(i)){
                if(num>0)
                    cout << " ";
                cout << is_number_of_daffodils(i);
                num++;
            }
        }
        if(num==0)
            cout << "no";
        cout << endl;
    }

    return 0;
}
