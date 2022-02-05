#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        //Space print kara lo
         int space=i-1;
         while(space){
             cout<<" ";
             space=space-1;
         }

         //Stars print kara lo
         int j=i;
         while(j<=n){
             cout<<j;
             j=j+1;
         }
         cout<<endl;
         i=i+1;

    }
}

//for n=4
// 1234 
//  234
//   34
//    4