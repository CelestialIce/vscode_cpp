#include <iostream>

using namespace std;

int main()
{
    double score;
    while(cin>>score){
        if(score >= 90 && score <= 100)
        cout << "A:[90,100]"<<endl;
    else if(score >= 80 && score < 90)
        cout << "B:[80,90)"<<endl;
    else if(score >= 70 && score < 80)
        cout << "C:[70,80)"<<endl;
    else if(score >= 60 && score < 70)
        cout << "D:[60,70)"<<endl;
    else if(score >= 0 && score < 60)
        cout << "E:[0,60)"<<endl;
    else
        cout<<"Wrong Score!"<<endl;//�Ϳ������Ĳ����ģ��Ҳ��ҵõ����bug
    }


    return 0;
}
