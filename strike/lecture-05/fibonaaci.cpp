#include<iostream>
using namespace std;

int main(){

  int n=15;

  int fib;
  if(n<=1){
    fib = n;
    return 0;
  }


  int last_fib=1 , second_last_fib=0;

  for(int i=2 ; i<=n ; i++){
    fib = last_fib + second_last_fib;
    second_last_fib = last_fib;
    last_fib = fib;
  }


  cout<<fib<<endl;

  return 0;
}