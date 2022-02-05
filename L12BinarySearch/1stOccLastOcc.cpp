#include<iostream>
using namespace std;

int FirstOcc(int arr[], int size, int key){

    int s=0; 
    int e= size-1;
    int mid= s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid +1;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }

        mid= s + (e-s)/2;
    }

    return ans;
}

int LastOcc(int arr[], int size, int key){

    int s=0; 
    int e= size-1;
    int mid= s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]<key){
            s = mid +1;
        }
        else if(arr[mid]>key){
            e = mid -1;
        }

        mid= s + (e-s)/2;
    }

    return ans;

}

int main(){

    int arr[10]={1, 2, 3, 3, 3, 3, 3, 3, 3, 5};

    cout<<"First Occurence of 3 is at index : "<<FirstOcc(arr, 11, 3)<<endl;
    cout<<"Last Occurence of 3 is at index : "<<LastOcc(arr, 11, 3)<<endl;



}