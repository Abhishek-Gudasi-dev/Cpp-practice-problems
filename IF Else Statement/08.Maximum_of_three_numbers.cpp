#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter three numbers :";
  cin>>a>>b>>c;
  if(a>=b&&a>=c){
    cout<<"The Largest number is :"<<a<<endl;
  }
  else if(b>=a&&b>=c){
    cout<<"The Largest number is :"<<b<<endl;
  }
  else{
    cout<<"The Largest number is :"<<c<<endl;
  }
  cout<<"The Largest number is :"<<(a>b?(a>c?a:c):(b>c?b:c))<<endl;
  cout<<"The Largest number is :"<<((a>=b&&a>=c)?a:(b>=a&&b>=c?b:c))<<endl;
  return 0;
}