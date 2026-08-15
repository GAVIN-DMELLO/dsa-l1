#include<iostream>
using namespace std;

int main(){


  int a , b , c;

  char s , q;

  cin>>a>>s>>b>>q>>c;


  if(s=='+'){
   if(c == a+b){
    cout<<"Yes"<<'\n';
   }else{
    cout<<a+b<<'\n';
   }
  }
  else if(s == '-'){
    if(c == a-b){
      cout<<"Yes"<<'\n';
    }else{
    cout<<a-b<<'\n';
   }
  }
  else if(s == '*'){
    if(c == a*b){
      cout<<"Yes"<<'\n';
    }else{
    cout<<a*b<<'\n';
   }
  }

  return 0;
}