#include<iostream>
using namespace std;


string marks(int marks){
  string grade;
  if(marks>90){
    grade = "Excellent";
  }else if(marks>80){
    grade = "Good";
  }else{
    grade = "Ok";
  }

  return grade;
}

int main(){

  int std1 = 78 , std2 = 93;

  cout<<marks(std1)<<endl;
  cout<<marks(std2)<<endl;


  return 0;
}