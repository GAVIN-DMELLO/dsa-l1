#include<iostream>
using namespace std;

int main(){

  int num = 20;

  long long factorial = 1;

  if(num == 0){
    cout<<1<<endl;
    return 0;
  }

  
  while(num){
    
    factorial *= num;
    num--;
  }

  cout<<factorial<<endl;

  return 0;
}