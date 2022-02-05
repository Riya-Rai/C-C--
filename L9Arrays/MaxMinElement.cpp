#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n){

    int min = INT_MAX;

for(int i=0; i<n; i++){
    if(num [i] < min )
        min=num[i];
    }
   return min;
}

int getMax(int num[], int n){

    int maxi = INT_MIN;

for(int i=0; i<n; i++){
    
    //Shortcut for below code
        maxi = max(maxi, num[i]);
    
    //if(num [i] > maxi )
        //maxi=num[i];
    }
   return maxi;
}

int main(){

    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){

        cin>>num[i];

    }

    cout<<"Maximum value in the array "<<getMax(num, size)<<endl;
    cout<<"Minimum value in the array "<<getMin(num, size)<<endl;



}