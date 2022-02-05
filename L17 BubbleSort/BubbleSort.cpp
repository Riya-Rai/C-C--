#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int temp[6]={};
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
               
            }
            
        }
        
    }

    cout<<"Sorted array is : "<<endl;
    
    for(int i = 0; i<n; i++){

        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[6]={10,7,6,9,14,1};
    bubbleSort(arr,6);
    
}