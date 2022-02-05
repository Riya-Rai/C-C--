#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //Printing Stars first
        int stars = n-i+1;
        while(stars){
            cout<<"*";
            stars=stars-1;
        }
        cout<<endl;
        i=i+1;
    }
}

// *****
// ****
// ***
// **
// *