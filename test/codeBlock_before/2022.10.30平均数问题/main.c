#include <stdio.h>

int main()
{
    int a,b,c;
    float sum;
    while (scanf("%d %d %d",&a,&b,&c)!=EOF)//��EOF
        {sum=(a+b+c)/3.0;
        printf("%.3f\n",sum);}//Ҫ��������
    return 0;
}
