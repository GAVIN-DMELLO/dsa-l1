#include<iostream>
using namespace std;

int main(){

  int dividend = 56 ;
  int divisor = 16 ;
  

  
  while(dividend){
    int remainder = dividend % divisor;
    if(remainder == 0){
      cout<<"GCD is "<<divisor<<endl;
      break;
    }
    dividend = divisor;
    divisor = remainder;
  }



  return 0;
}