#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int num = 153;

  int arm = 0;

  while(num>0){
    int mul = 1;
    int rem = num%10;
    num = num/10;

    // cout<<pow(rem , 3)<<endl;
    for(int i=1 ; i<=3 ; i++){
      mul *= rem;
    }
    arm += mul;
    // cout<<arm<<endl;
  }

  cout<<arm<<endl;




  return 0;
}