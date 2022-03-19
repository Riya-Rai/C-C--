#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int s, int e, int key){
    //base case (element not found)
    if(s>e)
        return false;

    int mid = s + (e-s)/2; 

    if(arr[mid]==key)
        return true;

    if(arr[mid]<key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }

}




int main(){
    int arr[6]={2,4,6,10,14,16};

    int key = 10;
    int s=0;
    int e=5;

    bool ans = binarySearch(arr, s, e, key);

    if(ans)
        cout<<"Found";
    else
        cout<<"Not-Found";

    return 0;
}