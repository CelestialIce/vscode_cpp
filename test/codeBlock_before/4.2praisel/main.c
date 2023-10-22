#include <stdio.h>
#include <stdlib.h>
#define PRAISE "You are an extraordinary being"
int main()
{
    char name [40];

    printf("What'your name?");
    scanf("%s",name);
    printf("Hello,%s.%s\n",name,PRAISE);

    return 0;
}
