#include<iostream>
using namespace std;

int Duplicate(int arr[], int size){

    //my own approach
    // for(int i=0; i<size; i++){

    //     int count=0;
    //     int num = arr[i];

    //     for(int j=0; j<size; j++){

    //         if(arr[j]==num){
    //             count++;
    //         }
    //     }

    //     if(count==2){
    //         return arr[i];
    //     }
    // }

    ///////////////////////////Optimized Approach///////////////////////////

    int ans=0;
    //XORing all array elems with each other
    for(int i=0; i<size; i++){
        
        ans = ans^arr[i];
        
    }

    //After the above loop all elements will be included in ans except 
    //that one element which was duplicate as a^b^c^x^x=a^b^c^0=a^b^c.
    
    //XORing the value stored in ans with 1 to n-1
    //because it is told in que that the array will consist of elements from 1 to n-1

    for(int i=1; i<size; i++){
        
        ans = ans^i;
        
    }
    
    return ans;

}

int main(){

int arr[100];
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;

    cout<<"Enter the elements of array"<<endl;

    for(int i=0; i<size; i++){

        cin>>arr[i];

    }

    cout<<"Duplicate element is "<<Duplicate(arr, size)<<endl;


}