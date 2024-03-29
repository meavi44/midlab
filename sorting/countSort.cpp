#include<bits/stdc++.h>
using namespace std;
void countSort(vector<int>&v){
    int maxi=INT_MIN;
    int n=v.size();
    int mini=INT_MAX;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        mini=min(mini,v[i]);   //for negative value
    }
     for(int i=0;i<n;i++){
        v[i]-=mini;
    }
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    vector<int>freq(maxi+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    for(int i=1;i<=maxi;i++){
        freq[i]+=freq[i-1];
    }
    for(int i=n-1;i>=0;i--){
        res[--freq[v[i]]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=res[i];
    }
    for(int i=0;i<n;i++){
        v[i]+=mini;                //for negative value
    }



}
int main(){
    int n,i=0,t;
    cin>>n;
    vector<int>v(n);
    while(n--){
        cin>>v[i];
        i++;
    }
    countSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}