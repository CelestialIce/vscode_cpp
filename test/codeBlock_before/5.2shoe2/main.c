#include <stdio.h>
#define ADJUST 7.31

int main()
{
    const double SCALE = 0.333;
    double shoe,foot;

    shoe=3.0;
    while (shoe<18.5)
    {
        foot=SCALE*shoe+ADJUST;
        printf("Shoe size (men's)   foot length\n");
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe+=1;
    }
    printf("If the shoe fits,wear it.\n");

    return 0;
}
