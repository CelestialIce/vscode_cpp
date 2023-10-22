#include<cstdio>
using namespace std;
const int N=5e6+10 ; 
int k,n,a[N];
void qsort(int l,int r)
{
	if(l>r) return;
	int i=l,j=r,x=a[l];
	while(i<j)
	{
		while(i<j&&a[j]>=x) j--; a[i]=a[j];
		while(i<j&&a[i]<=x) i++; a[j]=a[i];	
		//if(i<j) swap(a[i],a[j]); 
	}
	a[i]=x;	
	if(k<i) qsort(l,i-1);
	else if(k>i) qsort(i+1,r);
	else
	{
		printf("%d\n",a[i]);
		return;
	}
}
int main()
{
	//freopen("text.txt","r",stdin); 
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	qsort(0,n-1);
	//for(int i=0;i<n;i++) printf("%d ",a[i]);
    

	return 0;
}