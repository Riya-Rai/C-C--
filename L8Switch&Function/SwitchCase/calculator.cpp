#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    char op;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Enter the symbol of operation you want to perfrom"<<endl;
    cin>>op;

    switch(op){
        case '*': cout<<"a*b = "<< (a*b)<<endl;
                 break;
        case '+': cout<<"a+b = "<<(a+b)<<endl;
                 break;
        case '-': cout<<"a-b = "<<(a-b)<<endl;
                 break;
        case '/': cout<<"a/b = "<<(a/b)<<endl;
                 break;
        case '%': cout<<"a%b = "<<(a%b)<<endl;
                 break;
        default : cout<<"Please enter a valid operation"<<endl;
    }
}