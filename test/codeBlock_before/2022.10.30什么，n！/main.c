#include <stdio.h>

int main()
{
    int n;
    int sum=1;

    while(scanf("%d",&n)!=EOF)
    {
        for (int i=n;i>0;i--)
            {sum*=i;}
        printf("%d\n",sum);
        sum=1;
    }
    return 0;
}
