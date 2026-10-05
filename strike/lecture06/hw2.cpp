#include<iostream>
using namespace std;

int armstrong(int num){
  
  int arm = 0;
  int mul = 1;

  while(num){
    int rem = num%10;

    num = num/10;

    for(int i=1 ; i<=3 ; i++){
      mul *= rem;
    }



    arm = arm + mul;
    mul=1;


  }

  return arm;

  
}

int main(){

  int n;
  cin>>n;

  

  int num = n;
  int res = armstrong(num);
  if(res == n){
    cout<<"Is a armstrong"<<endl;
  }else{
    cout<<"Is not a armstrong"<<endl;
  }

  return 0;
}