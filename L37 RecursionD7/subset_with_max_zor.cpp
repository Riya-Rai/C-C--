 #include<bits/stdc++.h>
 
 using namespace std;
 
 
 vector<vector<int>> getSubsets(vector<int>& nums) {
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

    vector<vector<int>> subsets = getSubsets(v);
    int max_Xor = 0;
    vector<int> ans;

    for(vector<int> subset : subsets){
        int xr = 0;
        for(int ele : subset){
            xr ^= ele;
        }
        if(xr>max_Xor){
            max_Xor = xr;
            ans = subset;
        }
    }

    cout<<max_Xor<<endl;
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}