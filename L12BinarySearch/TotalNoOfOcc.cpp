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

    int arr[100];
    int size;
    int key;

    cout<<"Enter the size of array"<<endl;
    cin>>size;

    cout<<"Enter the elements of array"<<endl;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key"<<endl;
    cin>>key;

    int first = FirstOcc(arr, size, key);
    int last = LastOcc(arr, size, key);

    int result;
     
    if(last>0 && first>0){
    result = (last - first) + 1;
    cout<<key<<" occurs "<<result<<" number of times in the given array "<<endl;
    }

    else{
        cout<<"This element doesn't exists in the given array";
    }
}