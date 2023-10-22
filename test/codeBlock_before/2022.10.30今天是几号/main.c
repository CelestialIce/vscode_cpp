#include<stdio.h>

int main()
{
	int year,mouth,day,a,b;
	const int LEAP_YEAR[12]={31,29,31,30,31,30,31,31,30,31,30,31} ;
	const int COMMEN_YEAR[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;


	while (scanf("%d %d %d",&year,&mouth,&day)!=EOF)//¿®∫≈”÷√ªº”
	{
	    b=0;
	    if (year%400==0||year%4==0&&year%100!=0)
            {for(a=0;a<(mouth-1);a++)
                b+=LEAP_YEAR[a];}

        else
            {for(a=0;a<(mouth-1);a++)
				b+=COMMEN_YEAR[a];}
        b=b+day;
        printf("%d\n",b);}
	return 0;
}
