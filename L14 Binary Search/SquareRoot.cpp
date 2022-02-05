#include<iostream>
using namespace std;

long long int mySqrt(int x) {
       
   int s = 0;
   int e = x;
   long long  int mid = s + (e-s)/2;
   long long int ans = -1;
    
    while(s<=e){
        
        long long int sq = mid*mid ; 
        
        if( sq == x){
            return mid;
        }
        
         if( sq < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return ans;
    }

    double morePrecise(int n, int precision, int Sol1){

        double factor = 1;
        double ans = Sol1;

        for(int i=0; i<precision; i++){
            factor = factor/10;

            for(double j=ans; j*j<n; j=j+factor){
                ans = j;
            }
        }
            return ans;
    }

    int main(){
        int n;
        cout<<"Enter the Number "<<endl;
        cin>>n;

        int Sol1 = mySqrt(n);
        cout<<"Answer is "<<morePrecise(n, 3, Sol1)<<endl;;

    }