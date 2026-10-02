#include<iostream>
using namespace std;

int main(){

  int num = 25;

  int sqrt = 1;

  for(int i=1 ; i<=num ; i++){
    sqrt = i*i;
    if(sqrt > num){
      cout<<i-1;
      return 0;
    }
  }

  return 0;
}