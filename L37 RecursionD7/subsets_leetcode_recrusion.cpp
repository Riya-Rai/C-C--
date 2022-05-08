#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,vector<int> output, int index, vector<vector<int>>& ans) 
    {
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        //exclude part
        solve(nums, output, index+1, ans);
        
        //include part
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums, output, index, ans);
        return ans;
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