//print combination
#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>&arr,int k,int low,vector<int>&result){
    int n=arr.size();
    
    if(result.size()==k){
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(low==n)return;
    result.push_back(arr[low]);
    combination(arr,k,low+1,result);
    result.pop_back();
    combination(arr,k,low+1,result);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>result;
    combination(v,3,0,result);

}