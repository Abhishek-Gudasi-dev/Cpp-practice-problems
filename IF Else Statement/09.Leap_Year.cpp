#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"Enter a year :";
  cin>>year;
  if(year%4==0){
    cout<<"This is Leap year"<<endl;
  }
  else{
    cout<<"This is not Leap year"<<endl;
  }
  return 0;
}