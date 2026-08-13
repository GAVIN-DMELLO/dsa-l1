#include<iostream>
using namespace std;

int main(){

  int x;
  cin>>x;

  if(x/1000%2==0){
    cout<<"EVEN"<<'\n';
  }
  else{
    cout<<"ODD"<<'\n';
  }

  return 0;
}