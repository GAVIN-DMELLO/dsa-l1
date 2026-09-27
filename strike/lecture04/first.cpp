#include<iostream>
using namespace std;

int main(){

  // for(int i=1 ; i<=1 ; i++){
  //   cout<<1;
  // }
  // cout<<endl;

  // bool num = 1;
  // for(int i=0 ; i<=1 ; i++){
  //   cout<<num;
  //   num = !num;
  // }
  // cout<<endl;


  for(int j=1 ; j<=5  ; j++){
    bool num = j%2 ;
    for(int i=0 ; i<j ; i++){
      cout<<num;
      num = !num;
    }
    cout<<endl;
  }
  


  // for(int i=0 ; i<=3 ; i++){
  //   cout<<num;
  //   num = !num;
  // }
  // cout<<endl;


  // for(int i=0 ; i<=4 ; i++){
  //   cout<<num;
  //   num = !num;
  // }
  // cout<<endl;

  return 0;
}