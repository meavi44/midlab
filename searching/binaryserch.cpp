//implementation

#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==target) return mid;
        else if(v[mid]<target){
           low=mid+1;
        }
        else{
           high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int s=76;
    cout<<binarySearch(v,s)<<endl;
}