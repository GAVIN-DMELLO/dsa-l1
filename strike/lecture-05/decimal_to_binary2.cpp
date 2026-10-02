#include<iostream>
using namespace std;

int main(){

  int num;
  cin>>num;

  int remainder = 0;

  int binary = 0;

  int count = 1;

  int temp = 0;

  while(num){

    remainder = num%2;

    num = num/2;

    binary = remainder*count + temp;
    temp = binary;

    count *= 10;
  }
  cout<<binary<<endl;


  // int b_remainder = 0;

  // int new_binary = 0;
  
  // while(binary){
  //   b_remainder = binary%10;

  //   binary = binary / 10;

  //   new_binary = new_binary*10 + b_remainder ;
  // }

  // cout<<new_binary;

  return 0;
}