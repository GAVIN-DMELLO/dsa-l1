#include<iostream>
using namespace std;

int main(){
  for(int k=5 ; k>=1 ; k--){
    for(int i=1 ; i<=k ; i++){
      cout<<" ";
    }
    for(int j=1;j<=(11-2*k);j++){
      cout<<"*";
    }
    for(int i=1;i<=k;i++){
      cout<<" ";
    }
    cout<<endl;
  }
  


  // for(int i=1 ; i<=3 ; i++){
  //   cout<<" ";
  // }
  // for(int j=1;j<=3;j++){
  //   cout<<"*";
  // }
  // for(int i=1;i<=3;i++){
  //   cout<<" ";
  // }
  // cout<<endl;



  // for(int i=1 ; i<=2 ; i++){
  //   cout<<" ";
  // }
  // for(int j=1;j<=5;j++){
  //   cout<<"*";
  // }
  // for(int i=1;i<=2;i++){
  //   cout<<" ";
  // }
  // cout<<endl;


  // for(int i=1 ; i<=1 ; i++){
  //   cout<<" ";
  // }
  // for(int j=1;j<=7;j++){
  //   cout<<"*";
  // }
  // for(int i=1;i<=1;i++){
  //   cout<<" ";
  // }
  // cout<<endl;


  // for(int i=1 ; i<=0 ; i++){
  //   cout<<" ";
  // }
  // for(int j=1;j<=9;j++){
  //   cout<<"*";
  // }
  // for(int i=1;i<=0;i++){
  //   cout<<" ";
  // }
  // cout<<endl;



  return 0;
}