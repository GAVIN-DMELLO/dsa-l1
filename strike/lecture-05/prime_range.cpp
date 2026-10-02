#include<iostream>
#include<vector>
using namespace std;

int main(){
  
  int num = 60;
  bool isPrime = false;

  vector<int> factors;

  for(int i=2 ; i<=num/2 ; i++){
    if(num % i == 0){
      // cout<<i<<" ";
      factors.push_back(i);
      isPrime = true;
    }
  }

  if(isPrime){
    cout<<"Not a Prime"<<endl;
    for(int i=0 ; i<factors.size() ; i++){
      cout<<factors[i]<<" ";
    }
  }else{
    cout<<"Is Prime"<<endl;
  }

  cout<<endl;




  int n;


  for(int k=0 ; k<factors.size() ; k++){
    n = factors[k];
    bool i_am_a_prime_factor = 1;

    for(int j=2 ; j<=n/2 ; j++){
      if(n % j == 0){
        // cout<<j<<" ";
        i_am_a_prime_factor = 0;
      }
    }


    

    if(i_am_a_prime_factor){
      cout<<n<<" this is a prime factor"<<endl;
    }
    // else{
    //   cout<<"sorry boss i am composite"<<endl;
    // }
  }
  


  

  return 0;
}