//  find the first occurence of given element x in a sorrted array
// input 
// 2 5 5 5  6 6 8 9 9 
// x=5

// output
// 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l=0,r=n-1;
    int ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            ans=mid;
          r=mid-1;
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(ans==0){
        cout<<"-1";
    }
    else{
        cout<<ans;
    }
    
}