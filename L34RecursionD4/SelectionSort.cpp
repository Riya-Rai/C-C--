#include<iostream>
using namespace std;

void sort(int *arr, int n) {

    //base case - already sorted
    if(n == 0 || n == 1) {
        return ;
    }

    //1 case sovle karlia - smallest element ko end me rakh dega

    int i=0;
    int minIndex=i;
    
    for(int j=i+1; j<n; j++) {

        if(arr[j] < arr[minIndex]){
            minIndex=j;
        }

        swap(arr[minIndex], arr[i]);
    }

    //Recursive Call
    sort(arr+1, n-1);

}

int main() {

    int arr[5] = {2,5,1,9,6};
    
    sort(arr,5);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}