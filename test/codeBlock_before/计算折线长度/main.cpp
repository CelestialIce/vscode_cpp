#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double count_distence(double a,double b){
    return sqrt(a*a+b*b);
}
void move(int& x,int& y){
    if(y==0){
        y=x+1;
        x=0;
    }
    else{
        y--;
        x++;
    }
}

int main()
{
    int n=0;
    cin >> n;
    while(n--){
        int x1=0,y1=0,x2=0,y2=0;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1==x2&&y1==y2){
        cout << 0.000 << endl;
        continue;
        }
        double sum=0;
        int t;
        if(x1+y1>x2+y2){
            t=x1; x1=x2; x2=t;
            t=y1; y1=y2; y2=t;
        }
        else if(x1+y1==x2+y2&&x1>x2){
            t=x1; x1=x2; x2=t;
            t=y1; y1=y2; y2=t;
        }
        int temp1=x1,temp2=y1;
        move(x1,y1);
        while(1){
            sum+=count_distence(temp1-x1,temp2-y1);
            if(x1==x2&&y1==y2)
                break;
            move(x1,y1);
            move(temp1,temp2);
        }
        cout << setiosflags(ios::fixed) << setprecision(3);
        cout << sum << endl;
    }
    return 0;
}
