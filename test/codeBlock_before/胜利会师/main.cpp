#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double u, v, w, l;
        cin>>u>>v>>w>>l;
        double time=l/(u+v);
        double dis=time*w;
        cout<<setiosflags(ios::fixed)<<setprecision(3);
        cout<<dis<<endl;
    }


    return 0;
}
