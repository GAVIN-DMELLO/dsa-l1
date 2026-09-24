#include<iostream>
using namespace std;

int main(){
  int n , m;

  cin>>n>>m;

  if(n > m){
    cout<<n << " Is greater than " << m <<'\n';
  }else{
    cout<<m <<" Is greater than "<<n<< '\n';
  }

  return 0;
}