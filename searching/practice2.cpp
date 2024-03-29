// find the square root of a given non negative integer value x.
// round it to the nearest integer.
// input 
// x=4
// output 2
// input 11
// output 3

#include<bits/stdc++.h>
using namespace std;
int square_root(vector<int> &v){
    int low=0,high=v.size()-1;
    int k=v.size();
    int ans=0;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]*v[mid]<=k){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=i+1;
    }
    cout<<square_root(v)<<endl;
}