#include<iostream>
using namespace std;

int main(){
  char s;
  cin>>s;

  if(s>=48 && s<=57){
    cout<<"IS DIGIT"<<'\n';
  }
  else if(s>=65 && s<=90){
    cout<<"ALPHA"<<'\n'<<"IS CAPITAL"<<'\n';
  }
  else if(s>=97&&s<=122){
    cout<<"ALPHA"<<'\n'<<"IS SMALL"<<'\n';
  }
  return 0;
}