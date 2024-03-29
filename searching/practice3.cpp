// given an array of integer of a in sorted order.find the first and last position 
// of the given target element in the sorted array.follow 0 base indexing.
// if target is not found return [-1,-1]
// input 
// arr=[1,2,3,3,3,5,11], target=3
// output [2,4]

#include<bits/stdc++.h>
using namespace std;
int lower_index(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(v[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int upper_index(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target){
            ans=mid;
            low=mid+1;
        }
        else if(v[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cin>>n;
   
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     cin>>target;
    int a=lower_index(v,target);
    int b=upper_index(v,target);
    cout<<a<<" "<<b<<endl;
}