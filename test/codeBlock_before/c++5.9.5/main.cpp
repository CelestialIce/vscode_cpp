#include <iostream>

using namespace std;

int main()
{
    char month[20]{};
    char a='1';
    for(int i=0;i<12;i++){
        month[i]=a++;
    }

    int sale[12]{};

    for(int i=0;i<12;i++){
        cout<<"Please enter the sales in "<<month[i]<<" "<<endl;
        cin>>sale[i];
    }
    int sum=0;
    for(int i=0;i<12;i++){
        sum+=sale[i];
    }
    cout<<sum;

    return 0;
}
