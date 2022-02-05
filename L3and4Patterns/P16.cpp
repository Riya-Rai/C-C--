#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=n;
     while(i>=1){

         //Space print karlo
         int space = 0;

         while(space<n-i){
             cout<<" ";
             space=space+1;
         }

         //Ab Stars print karo
         int j = 1;
         while(j<=i){
             cout<<"*";
             j=j+1;
         }
         cout<<endl;
         i=i-1;
     }
}
//for n=4
// ****
//  ***
//   **
//    *