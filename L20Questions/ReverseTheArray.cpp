#include<iostream>

using namespace std;

int main(){
    int arr[5] = {1,3,5,8};

    cout<<"Array befor reversing -->"<<endl;

    for(int i=0; i<5; i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;

    int s=0;
    int e = 4;

    while(s<=e){

        swap(arr[s], arr[e]);

        s++;
        e--;
    }

    cout<<"Array after reversing -->"<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}