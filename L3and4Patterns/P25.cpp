#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        //for printing 1st portion of the Pyramid
        int space=n-i+1;
        int count=1;
        while(space){
            cout<<count;
            count=count+1;
            space=space-1;
        }

        //for printing 2nd portion of the pyramid
        int j=2;
        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }

        //for printing 3rd portion of the pyramid
        int k = i-1;
        while(k){
            cout<<"*";
            k=k-1;
        }

        //for printing the 4th portion of the pyramid
        int x=n-i+1;
        while(x>=1){
            cout<<x;
            x=x-1;
        }
        cout<<endl;
        i=i+1;
    }
}