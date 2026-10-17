#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,e;
  float perc;
  cout<<"Enter the marks of 5 subjects :";
  cin>>a>>b>>c>>d>>e;
  perc=(a+b+c+d+e)/(float)5;
  cout<<"Percentage is :"<<perc;
  return 0;
}