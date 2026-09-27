#include<iostream>
using namespace std;

int main(){

  int num;
  cin>>num;

  if(num<2){
    cout<<"Not a Prime number";
  }

  for(int i=2 ; i<=num-1 ; i++){
    if(num%i == 0){
      cout<<"Not a Prime Number";
      return 0;
    }
  }

  cout<<"Prime Number";

  return 0;
}