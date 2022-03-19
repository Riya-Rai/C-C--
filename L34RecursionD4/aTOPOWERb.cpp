#include<bits/stdc++.h>
using namespace std;

int ToPower(int a, int b){

    //base case
    if(b==0)
        return 1;

    if(b==1)
        return a;

    //Recursive Call
    int ans = ToPower(a , b/2);

    if(b%2==0){
        //if b is even
        return ans*ans; 
    }
    else{
        //if b is odd
        return a*ans*ans;
    }
}

int main(){

    int a, b;

    cin>>a>>b;

    int ans = ToPower(a,b);

    cout<<"Answer is "<<ans<<endl;

    return 0;
} 