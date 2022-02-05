#include<iostream>
#include<limits.h>

using namespace std;

void Intersection(int a1[], int a2[], int n, int m){

    int arr[100];
    int k=0;

    for(int i=0; i<n; i++){

        //int temp = a1[i];

        for(int j=0; j<m; j++){

            if(a1[i] == a2[j]){

                arr[k] = a2[j];
                a2[j] = INT_MIN;
                k++;
                break;
            }
        }
    }

    cout<<"Final array is "<<endl;

    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int a1[100];
    int a2[100];
    int n;
    int m;

    cout<<"Enter the size of 1st Array"<<endl;
    cin>>n;
    cout<<endl<<"Enter the elements of first Array"<<endl;
    
    for(int i=0; i<n; i++){
            cin>>a1[i];
    }

    cout<<"Enter the size of 2nd Array"<<endl;
    cin>>m;
    cout<<endl<<"Enter the elements of second Array"<<endl;
    
    for(int i=0; i<m; i++){
            cin>>a2[i];
    }

    Intersection( a1, a2, n, m);



}