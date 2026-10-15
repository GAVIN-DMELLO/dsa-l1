#include<iostream>
using namespace std;

int main(){

  int n[10] = {1,2,3,4,5,6,7,3,9,10};

  for(int i=0 ; i<9 ; i++){
    if(n[i]>n[i+1]){
      cout<<"Not Sorted"<<n[i]<<endl;
      return 0;
    }
  }

  cout<<"Sorted"<<endl;

  return 0;
}