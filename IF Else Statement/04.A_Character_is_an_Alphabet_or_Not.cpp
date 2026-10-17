#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a Character :";
  cin>>ch;
  if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
    cout<<"Character is an Alphabet";
  }
  else{
    cout<<"Character is not an Alphaber";
  }
  return 0;
}