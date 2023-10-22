#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--){
    int a;
    cin>>a;
    int *pa=new int [a];
    for(int i=0;i<a;i++){
        cin>>pa[i];
    }
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-i-1;j++){
            if(abs(pa[j])<abs(pa[j+1])||abs(pa[j])==abs(pa[j+1])&&pa[j]<pa[j+1])
            {
                int t=pa[j]; pa[j]=pa[j+1]; pa[j+1]=t;
            }
        }
    }

   for(int i=0;i<a-1;i++)
    cout<<pa[i]<<' ';
   cout<<pa[a-1]<<endl;
   delete [] pa;
   }



    return 0;
}
