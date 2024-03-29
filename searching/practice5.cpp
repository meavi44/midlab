// given a mountail array 'a' of length greater than 3,return the index i such that arr[0]
// <arr[1]<....<arr[i-1]<arr[i]>arr[i+1]>...>arr[arr.length-1].this index 
// is known as the peak index 
// input 
// arr[0 4 1 0]
// output 1

#include<bits/stdc++.h>
using namespace std;
int peak_index(vector<int>&v){
    int low=0;
    int high=v.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid-1]<v[mid]){
            ans=mid;
            low=mid+1;
        }
        if(v[mid]>v[mid+1]){
            ans =mid;
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<peak_index(v);
}