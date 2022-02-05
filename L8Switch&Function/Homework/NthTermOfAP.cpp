#include<iostream>
using namespace std;

int AP(int n){

    int m;

    m = ((3*n) + 7);

    return m;
}

int main(){
   
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    cout<<n<<"th term  of the AP is "<<AP(n);
    
    return 0;
}