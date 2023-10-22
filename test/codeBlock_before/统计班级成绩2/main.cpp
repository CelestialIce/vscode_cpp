#include <cstdio>

int a[50][5];
double b[5];

using namespace std;


int main()
{
    int n, m;
    double sum_stu, sum_cos;
    while(scanf("%d %d",&n, &m)!=EOF){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            sum_stu=0;
            for(int j=0;j<m;j++){
                sum_stu+=a[i][j];
            }
            if(i==n-1)
                printf("%.2f\n",sum_stu/m);
            else
                printf("%.2f ",sum_stu/m);
        }
        for(int j=0;j<m;j++){
            sum_cos=0;
            for(int i=0;i<n;i++){
                sum_cos+=a[i][j];
            }
            b[j]=sum_cos/n;
            if(j==m-1)
                printf("%.2f\n",b[j]);
            else
                printf("%.2f ",b[j]);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            bool is_greater=true;
            for(int j=0;j<m;j++)
                if(a[i][j]<b[j]) is_greater=false;
            if(is_greater) cnt++;
        }
        printf("%d\n\n",cnt);
    }

    return 0;
}
