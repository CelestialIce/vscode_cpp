#include<stdio.h>
int gcd(int x,int y);//6,好像函数里面的是逗号
int main()
{
    int T;
    int m,n;
    int t;
    int d;//最小公约数

    scanf("%d",&T);
    for(t=0;t<T;t++)
    {
        scanf("%d%d",&n,&m);
        if(m==0)
            printf("Error!");
        else{
            d=gcd(n,m);
            if(d==m)
                printf("%d",n);
            else
                printf("%d/%d",n/d,m/d);
        }
        printf("\n");
    }

    return 0;
}
int gcd(int x,int y)
{
    int t;
    while(y!=0)
    {
        t=x%y;
        x=y;
        y=t;
    }
    return x;
}

/*a=12 b=18 t=0
a=18 b=12 t=12
a=12 b=6 t=6*/
