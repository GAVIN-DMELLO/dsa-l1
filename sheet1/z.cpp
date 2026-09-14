#include<iostream>
#include<cmath>
using namespace std;

int main(){


  int a , b , c , d ;

  cin>>a>>b>>c>>d;

  // cout<<pow(a,b);

  if(pow(a,b) > pow(c,d)){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }

  return 0;
}