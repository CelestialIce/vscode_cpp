#include <iostream>
#include <string>

using namespace std;

int SumoUnique(int a[], int size){
    int cnt;
    for(int i=0;i<size;i++){
        bool is_repeat=false;
        for(int j=0;j<i;j++)
            if(a[i]==a[j]) {
                is_repeat=true;
                break;
            }
        if(!is_repeat) cnt++;
    }
    return cnt;
}

int main()
{
    int n, size;
    cin>>n>>size;
    int* a = new int[n]; // ��̬�ڴ����
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<n-size+SumoUnique(a,size);

    delete[] a; // �ͷŶ�̬�ڴ�
    return 0;
}
