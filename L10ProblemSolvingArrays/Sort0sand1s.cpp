#include<iostream>
using namespace std;

void SortZeroOne(int arr[], int size){
    int left=0;
    int right = size -1;
    int i=0;

    while(left<right){

        if(arr[left]==0 ){
                left++;
        }

        else if(arr[right]==1 ){
            right--;
        }

        //agar yahan pohonch gaye ho iska matalab
        //arr[left]==1 && arr[right]==0

        else if( arr[left]==1 && arr[right]==0 ){
            swap(arr[left], arr[right]);
        left++;
        right--;
        }
    }


}

void PrintArray(int arr[], int size){

    cout<<"The elements of array are "<<endl;

    for(int i=0; i<size; i++){

         cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[8] = {1,1,0,0,0,0,1,0};
    

    SortZeroOne(arr,8);
    PrintArray(arr, 8);

}