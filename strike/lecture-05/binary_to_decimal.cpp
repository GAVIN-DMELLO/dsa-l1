#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int num = 1111;
  int decimal = 0;
  int expo = 0;

  while(num){

    int rem = num%10;

    num = num / 10;

    decimal = decimal + rem*pow(2,expo);
    expo++;

  }
  cout<<decimal;

  return 0;
}