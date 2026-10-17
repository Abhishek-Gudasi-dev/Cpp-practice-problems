#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"Enter a Charecter(in lower case) :";
  cin>>ch;
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    cout<<"The Charecter is Vowel"<<endl;
  }
  else{
    cout<<"The Charecter is Consonant"<<endl;
  }
  return 0;
}