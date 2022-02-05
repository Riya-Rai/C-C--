#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to check"<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if (n%i==0)
        {
            cout<<n<<" is not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<n<<" is a Prime Number";
    }
}