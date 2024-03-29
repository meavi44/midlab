//find duplicate elements using counting sort
#include<bits/stdc++.h>
using namespace std;
void findDuplicate(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       maxi=max(arr[i],maxi);
    }
    int freq[maxi+1]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<=maxi;i++){
        if(freq[i]>1){
            cout<<i<<" ";
        }
    }


}
int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findDuplicate(arr,n);

}