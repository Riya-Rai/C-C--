#include<iostream>
using namespace std;

void Isort(int *arr, int i, int size) {

    //base case - already sorted
    if(i==size) {
        return ;
    }

    //sorting method
    int temp = arr[i];
    int j = i-1;

    while(j>=0){
        if(temp<arr[j]){
            //current value se greater value milne pr shift the greater vale to the right by 1 place.
            arr[j+1]=arr[j--];
        }
        else{
            //current value se smaller element milne pr break krdo bcs us se piche ka part already sorted hoga and yeh element sahi position pr hai.
            break;
        }
    }
    //place the current element that is being compared at it's right place.
    arr[j+1] = temp;


    //Recursive Call
    Isort(arr,i+1, size);

}

int main() {

    int arr[5] = {2,5,1,6,9};
    
    Isort(arr,1,5);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}