#include<iostream>
using namespace std;

int main(){

  string f1 , s1 , f2 , s2;

  cin>>f1>>s1>>f2>>s2;

  string comparator;

  if(s1.length()>=s2.length()){
    comparator = s1;
  }else{
    comparator=s2;
  }

  for(int i=0;i<=comparator.length();i++){
    if(s1[i]!=s2[i]){
      cout<<"NOT"<<'\n';
      return 0;
    }
  }

  cout<<"ARE Brothers"<<'\n';

  return 0;

}