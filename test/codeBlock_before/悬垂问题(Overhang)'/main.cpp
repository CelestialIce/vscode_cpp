#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double len;
    while(cin>>len&&len!=0){
        int i=0;
        double sum=0;
        for(i=1;sum<len;i++)
            sum+=1.0/(2*double(i));
        cout<<i-1<<' '<<"blocks"<<endl;
    }

    return 0;
}
