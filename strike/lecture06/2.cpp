#include<iostream>
using namespace std;


void factorial(int n){
  int fact = 1;

  for(int i=1 ; i<=n ; i++){
    fact *= i;
  }

  cout<<fact<<endl;
}

int main(){

  factorial(5);

  factorial(3);

  return 0;
}