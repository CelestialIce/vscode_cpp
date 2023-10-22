#include <iostream>
#include <cstring>
#include <bitset>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    bitset<32> lock;
    int minTimes=1<<30;
    cin>>line;
    bitset<32> sourceLock(line);
    cin>>line;
    bitset<32>  targetLock(line);
    int n=line.size();
    for(int p=0;p<2;++p){
        lock=sourceLock;
        int times=0;
        int nextButton=p;
        for(int i=0;i<n;++i){
            if(nextButton==1){
                ++times;
            if(i>0)
                lock.flip(i-1);
            lock.flip(i);
            if(i<n-1)
                lock.flip(i+1);
            }
            if(lock[i]!=targetLock[i])
                nextButton=1;
            else
                nextButton=0;

        }
        if(lock==targetLock)
            minTimes=min(minTimes,times);
    }
    if(minTimes==1<<30)
        cout<<"impossible"<<endl;
    else
        cout<<minTimes<<endl;


    return 0;
}
