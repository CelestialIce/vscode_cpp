#include <stdio.h>

int main()
{
    int a,b,c;
    float sum;
    while (scanf("%d %d %d",&a,&b,&c)!=EOF)//是EOF
        {sum=(a+b+c)/3.0;
        printf("%.3f\n",sum);}//要在括号里
    return 0;
}
