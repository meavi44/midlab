#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r){
    // cout<<"l="<<l<<" "<<"r="<<r<<" "<<"mid="<<mid<<endl;
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
        // cout<<a[i]<<" ";
    }
    // cout<<"hel"<<endl;
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
        // cout<<b[j]<<" ";
    }
    // cout<<"next"<<endl;
    int i=0;
    int j=0;
    int k=l;
    cout<<k<<endl;
    while(i<an&&j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];

        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
}
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
   
    int mid=(l+r)/2;
     
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
   
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}