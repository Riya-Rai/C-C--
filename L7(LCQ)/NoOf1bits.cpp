#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

     int count=0;
        
        while(n!=0){
            //checking last bit
            if(n&1){
                count++;
            }
            n=n>>1;
        }

        cout<<"No. of 1 bits are: "<<count<<endl;
}