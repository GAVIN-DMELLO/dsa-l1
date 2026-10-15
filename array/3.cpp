#include<iostream>
using namespace std;

void printValue(int arr[] , int n){
  // arr[0] = 7;
  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}

int main(){

  int arr[5] = {10,20,11,18,30};
  printValue(arr , 5);


  int marks[10] = {11,19,8,1,2,18,9,10,17,20};
  printValue(marks , 10);


  return 0;
}