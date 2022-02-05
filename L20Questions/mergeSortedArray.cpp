#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int s1, int arr2[], int s2, int arr3[]){

int i=0, j=0;
int k=0;

while(i<s1 && j<s2){

    if(arr1[i] < arr2[j]){
        // arr3[k] = arr1[i];
        // k++;
        // i++;

        arr3[k++] = arr1[i++];
    }
    else{
        
        // arr3[k] = arr2[j];
        // k++;
        // j++;

        arr3[k++] = arr2[j++];
    }
}

while(i<s1){
    // arr3[k] = arr1[i];
    // k++;
    // i++;

    arr3[k++] = arr1[i++];


while(j<s2){
    // arr3[k] = arr2[j];
    // k++;
    // j++;

    arr3[k++] = arr2[j++];
}
}


}

void print(int arr3[], int n){

    cout<<endl;
    cout<<"Merged array is"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);


    return 0;
}