#include<stdio.h>
#include<math.h>
int main()
{
	double a ,b;
	char c;
	scanf("%lf %c %lf",&a,&c,&b); //…Ÿ¡À∂∫∫≈
	if (c== '+')
		printf("%.4f",a+b);
	else if(c=='-')
		printf("%.4f",a-b);
	else if(c=='*')
		printf("%.4f",a*b);
	else if(c=='/')
		if(fabs(b)<=0.0000001)
			printf("Error!");
		else
			printf("%.4f",a/b);
	return 0;
 }
