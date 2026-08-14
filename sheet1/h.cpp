#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int a , b;
  cin >> a >> b;

  cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<'\n';
  cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/double(b))<<'\n';
  cout<<"round "<<a<<" / "<<b<<" = "<<round(a/double(b))<<'\n';

  

  return 0;
}