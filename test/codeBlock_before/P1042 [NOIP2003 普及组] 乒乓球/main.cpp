#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char a;
    int e_w=0, e_l=0, t_w=0, t_l=0, ep=0, tp=0;
    int scoreboard_11[10086], scoreboard_21[10086];
    while(1){
        cin>>a;
        if(a=='E') break;
        if(a=='W'){
            e_w++;
            t_w++;
        }
        if(a=='L'){
            t_l++;
            e_l++;
        }
        scoreboard_11[ep]=e_w;
        scoreboard_11[ep+1]=e_l;
        if((e_w>=11||e_l>=11)&&abs(e_w-e_l)>=2){

            e_w=0; e_l=0; ep+=2;
        }
        scoreboard_21[tp]=t_w;
        scoreboard_21[tp+1]=t_l;
        if((t_w>=21||t_l>=21)&&abs(t_w-t_l)>=2){

            t_w=0; t_l=0; tp+=2;
        }

    }
        for(int i=0;i<=ep;i+=2){
            cout<<scoreboard_11[i]<<':'<<scoreboard_11[i+1]<<endl;
        }
        cout<<endl;
        for(int i=0;i<=tp;i+=2){
            cout<<scoreboard_21[i]<<':'<<scoreboard_21[i+1]<<endl;
        }



    return 0;
}
