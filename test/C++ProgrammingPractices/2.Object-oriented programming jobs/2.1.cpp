#include <iostream>

using namespace std;
int add(int x=1,int y=2,int z=3)
	{
		int sum;
		sum=x+y+z;
		return sum;
	}
double add(double x,int y)
	{
       double sum;
	   sum=x+y;
	   return sum;
	}

int main(){
		int add(int =1,int =2,int =3); //int add(int x=1,int y=2,int c=3);
		double add(double x,int y);
		int sum; double sum2;
		sum=add(10,20);
        sum2=add(1.0,2);
		cout<<sum<<endl;
		cout<<sum2<<endl;
		return 1;
	}
