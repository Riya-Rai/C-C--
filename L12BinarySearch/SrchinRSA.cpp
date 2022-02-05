#include<iostream>
using namespace std;

int Search(int arr[], int n, int k){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
	if (k >= arr[0]){
  
        if(k == arr[mid]){
            return mid;
        }

        e = mid - 1;
        mid = s + (e-s)/2;
        while(s <= e){
            if(k > arr[mid]){
                s = mid + 1;
            }
            else if(k == arr[mid]){
                return mid;
            }
            else if(k < arr[mid]){
                e = mid - 1;
            }

            mid = s + (e-s)/2;
        }
    }
    else {

        if(k == arr[mid]){
            return mid;
        }

        s = mid + 1;
        mid = s + (e-s)/2;
        while(s<= e){
            if(k > arr[mid]){
                s = mid + 1;
            }
            else if(k == arr[mid]){
                return mid;
            }
            else if(k < arr[mid]){
                e = mid - 1;
            }

            mid = s + (e-s)/2;
        }
    }

}

int main() {
     int arr[5] = {7,9,1,2,3};
     cout<<"Key found at index : "<<Search(arr, 5, 3)<<endl;
}