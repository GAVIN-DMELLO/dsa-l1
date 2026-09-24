#include<iostream>
using namespace std;

int main(){

  int marks;
  cin>>marks;

  if(marks>100 || marks<0){
    cout<<"Invalid Marks"<<'\n';
  }else if(marks>90){
    cout<<"Excellent"<<'\n';
  }else if(marks>80){
    cout<<"Good"<<'\n';
  }else if(marks>70){
    cout<<"Nice"<<'\n';
  }else if(marks>60){
    cout<<"Try hard next time"<<'\n';
  }else{
    cout<<"Fail"<<'\n';
  }

  return 0;
}