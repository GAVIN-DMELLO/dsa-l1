#include<iostream>
using namespace std;

int main(){
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;

  int start,end;

  start = max(l1,l2);
  end = min(r1,r2);


  if(start<=end){
    cout<<start<<" "<<end<<'\n';
  }
  else{
    cout<<-1<<'\n';
  }

  return 0;
}