#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int element){

        int i;
    for(i=0; i<size; i++){

        if(arr[i]==element){
            return 1;
        }

    }
        return 0;

}

void PrintArray(int arr[], int size){

    cout<<"The array elements are"<<endl;
    cout<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;

    cout<<"Enter the Elements of the Array"<<endl;
    int arr[100];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    PrintArray(arr, size);

    cout<<endl;
    cout<<"Enter the element you want to search"<<endl;

    int element;
    cin>>element;

    cout<<endl;
    bool found = isPresent(arr, size, element);

    if(found){
        cout<<element<<" is present in the array"<<endl;
    }
    else{
        cout<<element<<" is not present in the array"<<endl;
    }



}