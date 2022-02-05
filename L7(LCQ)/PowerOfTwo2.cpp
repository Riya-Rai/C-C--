#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int digit ;
    
    int m = n;
    while(m!=0){

        digit = (m&1);
        m=m>>1;

        if(m>0 && digit==1){
            cout<<n<<" is not a power of two"<<endl;
            break;
        }
        else if (m==0 && digit==1){

            cout<<n<<" is power of two"<<endl;
        }

    }

}