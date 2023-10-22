#include <iostream>
#include <cmath>
using namespace std;

//todo 
#define ButtomArea(r) (r*r)
#define surArea(r,h) (2*r*h)
#define Volume(r,h) ((r)*(r)*(h))
#define V2surArea(r,v) (2*v/(r))
//todo 
#define INF 0xfffffff
int V,N,minsurArea=INF;
int sumMinS[27],sumMinV[27];

void dfs0(int iFloor,int preR,int preH,int leftV,int surArea){
    if(leftV==0&&surArea<minsurArea){
        minsurArea=surArea;
        return;
    } 
    for(int r=preR-1;r>=iFloor;r--){
        if(iFloor==N) surArea=ButtomArea(r);
        int H_max=(1.0*leftV/ButtomArea(r))+1;
        if(H_max>preH-1) H_max=preH-1;
            if(preR>1&&V2surArea(preR-1,leftV)+surArea>=minsurArea) return;
            if(leftV<sumMinV[iFloor]) return;
            if(surArea+sumMinS[iFloor]>=minsurArea) return;
        for(int h=H_max;h>=iFloor;h--){
            dfs0(iFloor-1,r,h,leftV-Volume(r,h),surArea+surArea(r,h));
        }

    }

    
}

int main()
{
    cin>>V>>N;
    sumMinV[0]=sumMinS[0]=0;
    for(int i=1;i<=N;i++){
        sumMinS[i]=sumMinS[i-1]+surArea(i,i);
        sumMinV[i]=sumMinV[i-1]+Volume(i,i);
    }
    int maxH=(V-sumMinV[N-1])/ButtomArea(N)+1;
    int maxR=sqrt(double(V-sumMinV[N-1])+1);
    minsurArea=INF;
    dfs0(N,maxR,maxH,V,0);
    if(minsurArea==INF)
        cout<<0<<endl;
    else
        cout<<minsurArea<<endl;
    return 0;
}