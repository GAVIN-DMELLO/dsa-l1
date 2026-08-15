#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main(){


  double input;
  cin>>input;

  if(input - int(input) != 0)
  {
    cout<<"float "<<int(input)<<" "<<input-int(input)<<'\n';
  }
  else
  {
    cout<<"int "<<int(input)<<'\n';
  }






  // cout<<st;

  return 0;
}