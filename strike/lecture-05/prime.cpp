#include<iostream>
#include<vector>
using namespace std;

int main(){

  // cout<<"hi";
  int primes[20] = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71
  };

  // cout<<"2"<<endl;


  int num = 60;

  vector<int> prime_factors;

  // cout<<"3"<<endl;
  

  int i=0;
  while(num > 1){
    // cout<<"4"<<endl;

    
      if(num%primes[i] == 0){
        num = num / primes[i];
        prime_factors.push_back(primes[i]);
        // cout<<i<<" ";
        // cout<<"5"<<endl;
      }else{
        i++;
      }
    
  }


  for(int i=0 ; i<prime_factors.size() ; i++){
    cout<<prime_factors[i]<<" ";
  }

  cout<<endl;

  // cout<<prime_factors.size()<<endl;
  

  return 0;
}