#include<iostream>
using namespace std;

int main(){

  int password = 1234;
  int input;
  cin>>input;

  while(input != password){
    cout<<"Incorrect password try again"<<endl;
    cin>>input;
  }

  cout<<"Access granted"<<endl;

  return 0;
}