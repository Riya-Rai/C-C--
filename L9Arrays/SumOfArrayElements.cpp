#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){

    cout<<"The elements of array are "<<endl;

    for(int i=0; i<size; i++){

         cout<<arr[i]<<" ";
    }

}

int SumOfElements(int arr[], int size){

    int sum = 0;

        for(int i=0; i<size; i++){

            sum = arr[i] + sum;
        }

        return sum;

}

int main(){

    int size;
    int arr[100];
    cout<<"Enter the size of array you want"<<endl;
    cin>>size;

    cout<<"Enter the Elements of Array"<<endl;

    for(int i=0; i<size; i++){

        cin>>arr[i];

    }

    PrintArray(arr, size);

    cout<<endl;
    cout<<endl;

    cout<<"Sum of all the elements in the array is "<<SumOfElements(arr,size)<<endl;

}