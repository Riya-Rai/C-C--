#include<iostream>
using namespace std;


int SetBits(int a, int b){

    int count = 0;

    while(a!=0){
        int digit = (a&1);
        a = a>>1;

        if(digit==1){
            count = count + 1;
        }
    }

    while(b!=0){
        int digits = (b&1);
        b = b>>1;

        if(digits==1){
            count = count + 1;
        }
    }

    return count;

}


int main(){

cout<<"Enter 1st number"<<endl;
int a;
cin>>a;

cout<<"Enter 2nd number"<<endl;
int b;
cin>>b;

cout<<"The sum of number of set bits in both numbers is "<<SetBits(a , b)<<endl;


}