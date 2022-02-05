#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    cout<<"Enter the number : "<<endl;
    int n;
    cin>>n;
    int ans=0;
    int digit;

    if ((ans > INT_MAX/10) || (ans < INT_MIN/10)){
        cout<<"0";
    }

        while(n!=0){
           
           digit = n%10;
           ans = (ans*10) + digit;
           n = n/10;
        }
        cout<<ans<<endl;
   
}