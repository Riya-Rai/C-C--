#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{

            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid]==key){
            return mid;
        }
        
        //changing parts
        if(arr[mid] < key){
            start = mid + 1;
        }

        else{

            end = mid-1;
        }
    
        mid = start + (end - start)/2;

    }

    return -1;
}


int SearchinRSA(int arr[], int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        //BS on 2nd Line
        binarySearch(arr, pivot, n-1, k);
    }
    else{
        //BS on 1st Line
        binarySearch(arr, 0, pivot-1, k);
    }
    
}

int main(){
    int arr[7] = {2, 4, 5, 6, 8, 9, 1};

    cout<<"Key is present at index : "<<SearchinRSA(arr, 7, 2);
}