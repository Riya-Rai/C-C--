#include<iostream>
using namespace std;

bool isEven(int a){

    if(a&1){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){

cout<<"Enter the number"<<endl;
int num;
cin>>num;

isEven(num);

if(isEven(num)){
    cout<<"The entered number is Even"<<endl;
}
else{
    cout<<"The entered number is Odd"<<endl;
}

}