#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int count=1;
     while(i<=n){

         //Space print karlo
         int space = n-i;

         while(space){
             cout<<" ";
             space=space-1;
         }

         //Ab Stars print karo
         int j = 1;
         while(j<=i){
             cout<<count;
             count=count+1;
             j=j+1;
         }
         cout<<endl;
         i=i+1;
     }
}
//for n=4
//     1 
//    23
//   456
// 78910