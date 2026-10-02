#include<iostream>
using namespace std;

int main(){

  int dividend = 24 ;
  int divisor = 36 ;

  int a = dividend;
  int b = divisor;
  int gcd = 0;

  
  while(dividend){
    int remainder = dividend % divisor;
    if(remainder == 0){
      cout<<"GCD is "<<divisor<<endl;
      gcd = divisor;
      break;
    }
    dividend = divisor;
    divisor = remainder;
  }

  int lcm = (a*b)/gcd;
  cout<<lcm<<endl;


  return 0;
}