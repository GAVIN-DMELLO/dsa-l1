#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v;

  for(int i=0 ; i<4 ; i++){
    cin>>v[i];
  }


  int actualsum = 0;
  for(int i=0 ; i<v.size() ; i++){
    actualsum += v[i];
  }


  int max = v[0];
  for(int i=0 ; i<v.size() ; i++){
    if(v[i] > max){
      max = v[i];
    }
  }


  int sum = 0;
  for(int i=1 ; i<=max ; i++){
    sum += i;
  }

  cout<<sum - actualsum<<endl;

  

  return 0;
}