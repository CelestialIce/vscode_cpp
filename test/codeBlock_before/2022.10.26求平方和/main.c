#include <stdio.h>

int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
        printf("%d\n",x*x+y*y);
    return 0;
}
