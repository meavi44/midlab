//given candidate numbers and a target find all unique candidate whose sum is equal to target
// input arr[10 1 2 7 6 1 5] target 8
// output
// 1 1 6
// 1 2 5
// 1 7
// 2 6
#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>&arr,int k,int low,vector<int>&result){
   
    
    if(k==0){
        // sort(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int n=arr.size();
    for(int i=low;i<arr.size();i++){
       if(i>low&&arr[i]==arr[i-1])continue;
       if(arr[i]>k)break;
            result.push_back(arr[i]);
            combination(arr,k-arr[i],i+1,result);
            result.pop_back();
        
        
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>result;
    combination(v,8,0,result);

}