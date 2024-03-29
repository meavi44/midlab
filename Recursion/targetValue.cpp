// given an array of n integers and a target value x. print 
// whether x exists in the array or not.
// input n=8,x=14,arr[4 12 54 14 3 8 6 1]
// output yes
// input n=1,x=9,arr[2]
// output no
#include<bits/stdc++.h>
using namespace std;
bool target(vector<int>&v,int i,int n,int x){
    if(i==n-1) return (v[i]==x);
    
    return (v[i]==x)||(target(v,i+1,n,x));
    
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    cout<<target(v,0,n,x);
}