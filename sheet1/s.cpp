#include<iostream>
using namespace std;

int main(){

  double input ;

  cin>>input;

  if(input>=0 && input<=25){
    cout<<"Interval [0,25]"<<'\n'; 
  }
  else if(input>25 && input<=50){
    cout<<"Interval (25,50]"<<'\n';
  }
  else if(input>50 && input<=75){
    cout<<"Interval (50,75]"<<'\n';
  }
  else if(input>75 && input<=100){
    cout<<"Interval (75,100]"<<'\n';
  }
  else{
    cout<<"Out of Intervals"<<'\n';
  }

  return 0;
}