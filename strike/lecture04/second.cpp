#include<iostream>
using namespace std;

int main(){


  // A
  // AB 
  // ABC 
  // ABCD 
  // ABCDE


  // for(int j=65 ; j<=69 ; j++){
  //   for(int i=65 ; i<=j ; i++){
  //     cout<<char(i);
  //   }
  //   cout<<endl;
  // }



  // A 
  // BB 
  // CCC 
  // DDDD 
  // EEEEE


  // int num = 65;
  // for(int j=1 ; j<=5 ; j++){
  //   for(int i=1 ; i<=j ; i++){
  //     cout<<char(num);
  //   }
  //   num++;
  //   cout<<endl;
  // }
  

  // for(int i=1 ; i<=2 ; i++){
  //   cout<<char(66);
  // }
  // cout<<endl;

  // for(int i=1 ; i<=3 ; i++){
  //   cout<<char(67);
  // }
  // cout<<endl;


  // for(int i=1 ; i<=4 ; i++){
  //   cout<<char(68);
  // }
  // cout<<endl;


  // for(int i=1 ; i<=5 ; i++){
  //   cout<<char(69);
  // }
  // cout<<endl;



//     1
//    121
//   12321
//  1234321
// 123454321


// for(int i=1 ; i<=4 ; i++){
//   cout<<"*";
// }
// for(int j=1 ; j<=1 ; j++){
//   cout<<j;
// }
// cout<<endl;


for(int k=1 ; k<=5 ; k++){
  for(int i=1 ; i<=5-k ; i++){
    cout<<" ";
  }
  for(int j=1 ; j<=k ; j++){
    cout<<j;
  }
  for(int j=k-1 ; j>=1 ; j--){
    cout<<j;
  }
  cout<<endl;
}





// for(int i=1 ; i<=2 ; i++){
//   cout<<"*";
// }
// for(int j=1 ; j<=3 ; j++){
//   cout<<j;
// }
// for(int j=2 ; j>=1 ; j--){
//   cout<<j;
// }
// cout<<endl;



// for(int i=1 ; i<=1 ; i++){
//   cout<<"*";
// }
// for(int j=1 ; j<=4 ; j++){
//   cout<<j;
// }
// for(int j=3 ; j>=1 ; j--){
//   cout<<j;
// }
// cout<<endl;


  
// for(int j=1 ; j<=5 ; j++){
//   cout<<j;
// }
// for(int j=4 ; j>=1 ; j--){
//   cout<<j;
// }
// cout<<endl;




  
  return 0;
}