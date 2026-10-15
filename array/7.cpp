#include<iostream>
using namespace std;

int main(){

  int a[5] = {2,3,1,4,6};

  
  for(int i=1 ; i<=6 ; i++){
    bool found = 0;
    for(int j=0 ; j<5 ; j++){
      if(a[j] == i){
        found = 1;
        break;
      }
    }
    if(found == 0){
      cout<<i<<endl;
      return i;
    }
  }

  return 0;
}