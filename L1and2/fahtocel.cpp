#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    int f;
    float cel;
    while(i<=n){
        cel = ((5.0/9)*(i-32));
        cout<<i<<"F----> "<<cel<<"C "<<endl;
        i=i+1;
    }
}