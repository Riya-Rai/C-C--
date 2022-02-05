#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of digits you want in the fibonacci series"<<endl;
    cin>>n;
    int a=0;
    int b=1;

cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        
        int fib = a+b;
        cout<<fib<<" ";

        a=b;
        b=fib;

    }
}