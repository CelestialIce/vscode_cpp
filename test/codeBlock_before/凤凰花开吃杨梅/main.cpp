#include <iostream>

using namespace std;

int main()
{
    long long n, i, sum,temp, tempn;
    while(cin >> n){
            /*
            for(i=1;1;i++){
            temp=i;
            tempn=n-1;
            while(tempn--){
                temp=temp/2-1;
            }
            if(temp==1)
                break;
        }
        cout << i <<endl;
    }
             */

            sum=1;
            n--;
            while(n--){
                sum=sum*2+2;
            }
            cout << sum << endl;
}
    return 0;

}
