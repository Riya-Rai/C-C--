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
         int stars=n-i+1;
         while(stars){
             cout<<i;
             stars=stars-1;
         }
         cout<<endl;
         i=i+1;

    }
}

//for n=4
// 1111
//  222
//   33
//    4