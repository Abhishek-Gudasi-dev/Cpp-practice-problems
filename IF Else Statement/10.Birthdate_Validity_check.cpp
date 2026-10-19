//To check whether the given date of birth is valid or invalid

#include<iostream>
using namespace std;

int main(){
  int dd,mm,yyyy;
  cout<<"Enter the date of birth(dd mm yyyy) :";
  cin>>dd>>mm>>yyyy;

  if(yyyy>=1&&yyyy<=2025){
    if(mm>=1&&mm<=12){
      if(mm==02){
        if(yyyy%4==0){
          if(dd>=1&&dd<=29){
            cout<<"Valid"<<endl;
          }
          else{
            cout<<"Invalid"<<endl;
          }
        }
        else{
          if(dd>=1&&dd<=28){
            cout<<"Valid"<<endl;
          }
          else{
            cout<<"Invalid"<<endl;
          }
        }
      }
      else if(mm==07){
        if(dd>=1&&dd<=31){
          cout<<"Valid"<<endl;
        }
        else{
          cout<<"Invalid"<<endl;
        }
      }
      else if(mm<=06){
        if(mm%2==0){
          if(dd>=1&&dd<=30){
            cout<<"Valid"<<endl;
          }
          else{
            cout<<"Invalid"<<endl;
          }
        }
        else{
          if(dd>=1&&dd<=31){
            cout<<"Valid"<<endl;
          }
          else{
            cout<<"Invalid"<<endl;
          }
        }
      }
      else{
        if(mm%2==0){
          if(dd>=1&&dd<=31){
            cout<<"Valid"<<endl;
          }
          else{
            cout<<"Invalid"<<endl;
          }
        }
        else{
          if(dd>=1&&dd<=30){
            cout<<"Valid"<<endl;
          }
          else{
            cout<<"Invalid"<<endl;
          }
        }
      }
    }
    else{
      cout<<"Invalid"<<endl;
    }
  }
  else if(yyyy==2026){
    if(mm>=1&&mm<=10){
      if(mm==2){
        if(dd>=1&&dd<=28){
          cout<<"Valid"<<endl;
        }
        else{
          cout<<"Invalid"<<endl;
        }
      }
      else if(mm==10){
        if(dd>=1&&dd<=19){
          cout<<"Valid"<<endl;
        }
        else{
          cout<<"Invalid"<<endl;
        }
      }
      else if(mm==07){
        if(dd>=1&&dd<=31){
          cout<<"Valid"<<endl;
        }
        else{
          cout<<"Invalid"<<endl;
        }
      }
      else{
        if(mm<=6){
          if(mm%2==0){
            if(dd>=1&&dd<=30){
              cout<<"Valid"<<endl;
            }
            else{
              cout<<"Invalid"<<endl;
            }
          }
          else{
            if(dd>=1&&dd<=31){
              cout<<"Valid"<<endl;
            }
            else{
              cout<<"Invalid"<<endl;
            }
          }
        }
        else{
          if(mm%2==0){
            if(dd>=1&&dd<=31){
              cout<<"Valid"<<endl;
            }
            else{
              cout<<"Invalid"<<endl;
            }
          }
          else{
            if(dd>=1&&dd<=30){
              cout<<"Valid"<<endl;
            }
            else{
              cout<<"Invalid"<<endl;
            }
          }
        }
      }
    }
    else{
      cout<<"Invalid"<<endl;
    }
  }
  else{
    cout<<"Invalid"<<endl;
  }

  return 0;
}