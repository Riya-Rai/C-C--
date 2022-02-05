#include<iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for (int i=1; i<=n; i++){
        fact = fact*i;
    }

    return fact;

}

//function signature (declartion)

int nCr( int n, int r){

    //Function Body (Definition)
    int ans = ( (factorial(n)) / ( (factorial(n-r)) * (factorial(r)) ) );

    return ans;

}

int main(){

    cout<<"Enter n"<<endl;
    int n;
    cin>>n;

    cout<<"Enter r"<<endl;
    int r;
    cin>>r;

    //Function Call
    int answer = nCr( n, r);
    cout<<"The answer is "<<answer<<endl;


}