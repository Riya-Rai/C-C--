#include<iostream>
using namespace std;

int power(int m, int n){

    int ans=1;

    for(int i=1; i<=n; i++){
        ans = ans*m;
    }

    return ans;
}

int main(){

        cout<<"Enter a"<<endl;
        int a;
        cin>>a;
        cout<<"Enter b"<<endl;
        int b;
        cin>>b;
        int answer = power(a,b);
        cout<<endl;
        cout<<"a to the power b = "<<answer<<endl;

}

