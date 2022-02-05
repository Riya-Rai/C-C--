#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int sum = 0;
    //int i = 1;
    // while(i<=n){
    //     if(i%2==0){
    //         sum=sum+i;
    //         i++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    int i = 2;
    while(i<=n){
    sum = sum + i;
    i=i+2;
    }
    cout<<"Sum of all even numbers between 1 to n is "<<sum<<endl;
}