#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void TripletSum(int arr[], int size, int n){

//     for(int i=0; i<size; i++){

//         for(int j=i+1; j<size; j++){
            
//             for(int k=j+1; k<size; k++){

//                 if(arr[i] + arr[j] + arr[k] == n)
//                 {
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                 }
//             }
//         }
//     }

// }

vector<vector<int>> TripletSum(vector<int> &arr, int n){
   // Write your code here.

    vector< vector<int>  > ans;
    
    for(int i=0; i<arr.size(); i++){
        
        for(int j=i+1; j<arr.size(); j++){
            
            for(int k=j+1; k<arr.size(); k++)
            {
                    if(arr[i] + arr[j] + arr[k] == n)
                    {
                        vector<int> temp;
            	        temp.push_back(arr[i]);
            	        temp.push_back(arr[j]);
                        temp.push_back(arr[k]);
                        sort(temp.begin(), temp.end());
            	        ans.push_back(temp);
                    }
                
            }
        }
    }
    sort(ans.begin(), ans.end());
    //return ans;

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }   
        cout << endl;
        

    }
 
}

int main(){

    int n;
    vector<int> arr;
    cout<<"Enter the size of array "<<endl;
    int size;
    cin>>size;

    int a;

    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>a;
        arr.push_back(a);
    }

    cout<<"Enter the sum for triplet : "<<endl;
    cin>>n;

    TripletSum(arr,  n);

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }   
    //     cout << endl;
        

    // }


}
