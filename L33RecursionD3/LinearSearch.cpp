#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[], int size, int key){

    //base case
    if(size==0)
        return false;
    
    if(arr[0]==key){
        return true;
    } 
    else{
        bool ans = LinearSearch(arr+1, size-1, key);
        return ans;
    }
}

int main(){
    int arr[5]={3,5,1,2,6};

    int key = 7;

    bool ans = LinearSearch(arr, 5, key);

    if(ans)
        cout<<"Found";
    else
        cout<<"Not-Found";

    return 0;
}