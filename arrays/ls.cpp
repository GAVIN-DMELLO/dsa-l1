#include<iostream>
using namespace std;

int main(){
  int n , target;
  cin>>n>>target;

  int a[100];

  for(int i=0 ; i<n ; i++){
    cin>>a[i];
  }

  for(int i=0 ; i<n ; i++){
    if(a[i] == target){
      // return i+1;
      cout<<i+1<<'\n';
    }
  }

  return -1;




  return 0;
}