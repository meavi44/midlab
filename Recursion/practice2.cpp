//check an array is sorted or not
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int idx,int n){
    if(idx==n-1) return true;
    if(arr[idx]<arr[idx+1]){
        sorted(arr,idx+1,n);
    }
    else{
        return false;
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,0,n)<<endl;
}