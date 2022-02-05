// search in a sorted rotated array
#include<bits/stdc++.h>
using namespace std;

int search(int nums[], int n, int target) { 
        int s=0; 
        int e = n - 1;
        while(s<=e){
          int mid = (s+e)/2;
          if(nums[mid]==target) return mid;
          if(nums[mid]>=nums[0]){
                     //left side
          if(target>=nums[s]  && target<nums[mid]){
              e = mid-1;
          }
          else {
              s = mid+1;
          }
          }
          else{
              //right half
              if(target>nums[mid]  && target<=nums[e]){
                  s = mid+1;
              }
              else{
                  e = mid-1;
              }
          }
        }
          return -1;
    }  

    int main(){
        int nums[7] = {2,4,5,6,8,9,1};

        cout<<"Key is present at index : "<<search(nums, 7, 2);
    }