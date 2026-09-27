#include<iostream>
using namespace std;

int main(){

  int num=1;

  for(int i=1 ; i<=10 ; i++){
    if(num==2 || num==4 ||num==7 ){
      cout<<endl;
    }
    cout<<num;
    num++;
  }


  return 0;
}