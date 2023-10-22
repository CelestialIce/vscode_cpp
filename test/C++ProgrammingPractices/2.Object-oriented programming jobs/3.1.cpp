#include <iostream>
 using namespace std;                                         
void doubleNum(int& refvar); 
void getNum(int &userNum);
int main() {
  int value;
  getNum(value);//函数调用
  doubleNum(value);
  cout<<"乘以二以后的结果是:"<<value<<endl;
  return 0;
}
void getNum(int &userNum) {
  cout<<"请输入一个数字";
  cin>>userNum;
}
void doubleNum(int & refvar) {
   refvar*=2;
}
