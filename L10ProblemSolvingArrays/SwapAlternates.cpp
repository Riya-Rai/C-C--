#include<iostream>
using namespace std;

void SwapAlternates(int arr[], int size){

    //My own method

    int start = 0;
    int end = 1;

    while(start<size-1){

        swap(arr[start] , arr[end]);
        end = end + 2;
        start = start + 2;

    }
    
     //babbar sir ka tarika
    // for(int i=0; i<size-1; i = i+2){
        
    //     swap(arr[i], arr[i+1]);

    // }


    cout<<endl<<"Final Array is : "<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[100];
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;

    cout<<"Enter the elements of array"<<endl;

    for(int i=0; i<size; i++){

        cin>>arr[i];

    }

    SwapAlternates(arr, size);

}