//print permutation 2nd approach
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&nums,vector<vector<int>>&ans,int idx){
    if(idx==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
     
        swap(nums[idx],nums[i]);
        print(nums,ans,idx+1);
        swap(nums[idx],nums[i]);
        
    }
}
int main(){
    vector<vector<int>>ans;
    int n;

    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    print(nums,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}