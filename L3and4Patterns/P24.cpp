#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        //for printing spaces
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        //for printing 2nd portion of the pyramid
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }

        //for printing 3rd portion of the pyramid
        int k = i-1;
        while(k){
            cout<<k;
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }
}