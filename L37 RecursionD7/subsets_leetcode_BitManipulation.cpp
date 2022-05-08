#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        int no_of_subset = (1<<size);
        
        vector<vector<int>> allSubsets;
        
        for(int subsetMask=0; subsetMask < no_of_subset; subsetMask++){
            vector<int> subset;
            
            for(int i=0; i<size; i++){
                if((subsetMask & (1<<i)) != 0){
                    subset.push_back(nums[i]);
                }
            }
            
            allSubsets.push_back(subset);
        }
        return allSubsets;
    }

    int main(){
    int n;
    cin>>n;
    int x;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    vector<vector<int>>ans = subsets(v);

    for(int i=0; i<ans[i].size(); i++){
        for(int j=0; j<ans[j].size(); j++){
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }

}