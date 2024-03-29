//subset sum
#include<bits/stdc++.h>
using namespace std;
void subsetsum(vector<int>&arr,int idx,vector<int>&result,vector<int>&sum){
    if(idx==arr.size()){
        int sums=0;
        for(int i=result.size()-1;i>=0;i--){
            sums+=result[i];
        }
        sum.push_back(sums);
        return;
    }
    result.push_back(arr[idx]);
    subsetsum(arr,idx+1,result,sum);
    result.pop_back();
    subsetsum(arr,idx+1,result,sum);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>result;
    vector<int>sum;
    subsetsum(v,0,result,sum);
    sort(sum.begin(),sum.end());
    for(int i=0;i<sum.size();i++){
        cout<<sum[i]<<" ";

    }
}