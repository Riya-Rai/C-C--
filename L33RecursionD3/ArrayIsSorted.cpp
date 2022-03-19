#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[], int n){

    //base-case
    //agar array ka size 0 ya 1 ke barabr hua iska matlab vo sorted hi hai.

    if(n==0||n==1)
        return true;

    if(arr[0]>arr[1])
        return false;
    else{
        bool ans = isSorted( (arr+1), (n-1) );
        return ans;
    }
}

int main(){
    int arr[5] = {2,4,9,8,9};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans)
        cout<<"Array is Sorted";
    else
        cout<<"Array is not Sorted";


    return 0;

}