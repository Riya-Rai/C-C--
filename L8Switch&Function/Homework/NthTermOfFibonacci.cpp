#include<iostream>
using namespace std;

int NthFibonacci(int n){

    int a=0;
    int b=1;

    int sum=0;

    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else{

        for(int i=1; i<(n-1); i++){

        sum = a+b;
        a=b;
        b=sum;
      }

    }
    return sum;

}

int main(){

    cout<<"Enter the nth term you want to know"<<endl;
    int n;
    cin>>n;

    cout<<n<<"th term of the fibonacci series is "<<NthFibonacci(n)<<endl;

}