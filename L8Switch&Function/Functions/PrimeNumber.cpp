#include<iostream>
using namespace std;

//0---->Not Prime
//1---->Prime

bool isPrime(int n){

    int i;
    for(i=2; i<n; i++){

        if(n%i==0){
            return 0;
            break;
        }

    }

    if(i==n){
        return 1;
    }

}


int main(){

    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;

    isPrime(n);

    if(isPrime(n)){
        cout<<"The entered number is Prime"<<endl;
    }
    else{
        cout<<"The entered number is Not Prime"<<endl;
    }



}