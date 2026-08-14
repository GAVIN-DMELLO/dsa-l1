#include<iostream>
#include<cctype>
using namespace std;

int main(){
  char x;
  cin>>x;

  if((x-32)>=65 && (x-32)<=90){
    cout<<(char)toupper(x);
  }else{
    cout<<(char)tolower(x);
  }

  return 0;
}