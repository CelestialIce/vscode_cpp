#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    int t;
    int x;
    int y=0;

    scanf("%d",&T);
    for(t=0;t<T;t++)
    {
        scanf("%d",&x);
        if(x>=0)
        {
            printf("%d\n",5*x-10000);
        }else{
        x=abs(x);
        y=5*x-10000;
        while(y<=0)
            {y=abs(y);
            y=5*y-10000;
            }
        printf("%d\n",y);}
    }
    return 0;
}
