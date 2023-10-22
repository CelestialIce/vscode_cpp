#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    cin.get();
    while(n--){
        char *pa=new char [105];
        cin.getline(pa,104);
        int l=strlen(pa);
        if(!isalpha(pa[0])&&pa[0]!='_')
            flag++;
        for(int i=1;i<l;i++){
            if(!isalpha(pa[i])&&!isdigit(pa[i])&&pa[i]!='_')
                flag++;
        }
        if(!flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        delete [] pa;
        flag=0;
        }
    return 0;
}
