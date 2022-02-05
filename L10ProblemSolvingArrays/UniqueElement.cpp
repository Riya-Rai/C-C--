#include<iostream>
using namespace std;

int unique(int arr[], int size){

    //my own approach
    for(int i=0; i<size; i++){

        int count=0;
        int num = arr[i];

        for(int j=0; j<size; j++){

            if(arr[j]==num){
                count++;
            }
        }

        if(count==1){
            return arr[i];
        }
    }

    // //optimized approach
    // int ans = 0;

    // for(int i=0; i<size; i++){
    //      ans = ans^arr[i];
    // }

    // return ans;

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

    cout<<"Unique element is "<<unique(arr, size)<<endl;


}