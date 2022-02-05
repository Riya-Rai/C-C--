#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size){

   int start = 0;
   int end =  size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<"Reversed Array is : "<<endl;
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int size;
    int arr[100];
    cout<<"Enter the size of Array"<<endl;
    cin>>size;
    cout<<"Enter the elements of Array"<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    ReverseArray(arr, size);

}