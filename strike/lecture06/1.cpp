#include<iostream>
using namespace std;

int main(){

  int num = 5;
  int fact;
  for(int j=1 ; j<=2 ; j++){
    
    fact = 1;

    for(int i=1 ; i<=num ; i++){
      fact *= i;
    }
    num -= 2;

    cout<<fact<<endl;
  }
  
  

  // int num2 = 3;
  // fact = 1;

  // for(int i=1 ; i<=num2 ; i++){
  //   fact *= i;
  // }

  // cout<<fact;



  

  return 0;
}