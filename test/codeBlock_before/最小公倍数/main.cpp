#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    while(cin >> n){
        int *p = new int [n];
        for(int a=0;a<n;a++){
            cin >> p[a];
        }
        for( j=0,i=1;1;i++){
            if(j!=0 && i%p[j]!=0)
                j=0;
            if(i%p[j]==0 && j!=n-1){
                j++;
                i--;
                continue;
            }
            if(j == n-1 && i%p[j] == 0)
                break;

        }
        cout << i << endl;
        delete [] p;
    }
    return 0;
}
