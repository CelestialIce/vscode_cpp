#include <iostream>

using namespace std;

long double probability(unsigned int fieid,unsigned picks){
    long double result=1.0;
    int p=picks;
    long double n=fieid;
    for(;p>0;p--,n--){
        result*=p/n;
    }
    return result;
}



int main()
{
    unsigned int field_1=41;
    unsigned int field_2=27;

    cout<<"The probability is "<<probability(field_1,5)*probability(field_2,2)<<" to win";


    return 0;
}
