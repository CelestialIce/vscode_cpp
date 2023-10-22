#include <iostream>

using namespace std;

int input_scores(int a[]){
    int i=0;
    cout << "Enter scorces or enter -1 to quit ";
    while(cin>>a[i]){
        if(a[i]==-1){
            break;
        }
        if(i==9){
            i++;
            break;
        }
        i++;
    }
    return i;
}

void output_scores(int a[],int n){
    cout<<"You can see the numbers under there"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

double golf_average(int a[],int n){
    double sum=0,average;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    average=sum/n;
    return average;
}

int main()
{
    int golf_score[10];
    int n=input_scores(golf_score);
    output_scores(golf_score,n);
    cout<<"The average is "<<golf_average(golf_score,n);

    return 0;
}
