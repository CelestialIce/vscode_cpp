	#include<iostream>
	#include<cstdio>
	using namespace std;
	int main(){
		int a,b,ans=0,te=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			printf("%5d",i);
			ans+=i;
			te++;
			if(te%5==0&&i!=b)cout<<endl;
		}
		cout<<endl<<"Sum = "<<ans<<endl;
		return 0;
	}
