#include<iostream>
using namespace std;

int main(){

  int input ;
  cin>>input;

  int year , month , days;
  year = input/365;

  month = (input%365)/30;

  days = input - ((year*365) + (month*30)) ;

  cout<<year<<" years"<<'\n';
  cout<<month<<" months"<<'\n';
  cout<<days<<" days"<<'\n';

  

  return 0;
}