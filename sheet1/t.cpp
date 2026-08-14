#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int a , b , c;

  cin>>a>>b>>c;

  int minimum = min({a,b,c});
  int maximum = max({a,b,c});
  int mid = a+b+c - (maximum+minimum);


  cout<<minimum<<'\n'<<mid<<'\n'<<maximum<<'\n'<<'\n';
  cout<<a<<'\n'<<b<<'\n'<<c<<'\n';




  return 0;
}