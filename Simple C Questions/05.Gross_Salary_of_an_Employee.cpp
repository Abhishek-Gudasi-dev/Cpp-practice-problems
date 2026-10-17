#include<iostream>
using namespace std;
int main(){
  int sal,hra,da;
  cout<<"Enter your salary : ";
  cin>>sal;
  hra=sal*0.2;
  da=sal*0.1;
  cout<<"Your Gross salary is :"<<sal+hra+da;
  return 0;
  
}