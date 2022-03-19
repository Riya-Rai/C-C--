#include<bits/stdc++.h>
using namespace std;

int Sum(int arr[], int size){

    //base-case
    if(size==0)
        return 0;

    if(size==1)
        return arr[0];

    int remainingPart = Sum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
    

}

int main(){

    int arr[6]={1,2,2,3,1};

    int ans = Sum(arr,6);

    cout<<"The sum of Array Elements is "<<ans<<endl;

    return 0;
}