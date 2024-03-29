//print all permutations of a given array
#include<bits/stdc++.h>
using namespace std;
void print_permutation(vector<int>&nums,vector<vector<int>>&ans,int freq[],vector<int>&ds){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            print_permutation(nums,ans,freq,ds);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int freq[n]={0};
    vector<int>ds;
    vector<vector<int>>ans;
    print_permutation(nums,ans,freq,ds);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}