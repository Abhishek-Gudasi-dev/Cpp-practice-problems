#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a Character :";
  cin>>ch;
  if(ch>='A'&&ch<='Z'){
    cout<<"Character is Uppercase";
  }
  else if(ch>='a'&&ch<='z'){
    cout<<"Character is Lowercase";
  }
  else if(ch>='0'&&ch<='9'){
    cout<<"Character is Digit";
  }
  else{
    cout<<"Character is Special Symbol";
  }
  return 0;
}