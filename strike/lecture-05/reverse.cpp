#include<iostream>
using namespace std;

 
int main(){


  int num;
  cin>>num;
  
  int reverse = 0;

  int last = 0;

  while(num>0){

    last = num % 10;  //6

    num = num / 10;  //45

    
    reverse = reverse*10 + last;  //6

    
  }

  cout<<reverse;

  return 0;
}