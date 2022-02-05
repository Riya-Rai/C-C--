#include<iostream>
#include<math.h>
using namespace std;


int main(){
    cout<<"Enter the number : "<<endl;
    int n;
    cin>>n;

    int ans;
    int i;

    for(i=0; i<=30; i++){
        int ans = pow(2,i);

        if(ans==n){
            cout<<"TRUE"<<endl; 
            break;
        }
        
    }

    if(i>30){
        cout<<"FALSE"<<endl;
    }
}