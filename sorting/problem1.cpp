//merge two sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v1(n);
    vector<int>v2(t);
    for(int r=0;r<v1.size();r++){
        cin>>v1[r];
    }
     for(int s=0;s<v2.size();s++){
        cin>>v2[s];
    }
    int i=0,j=0;
    int k=0;
    int p=n+t;
    vector<int>temp(p);
    while(i<n&&j<t){
        if(v1[i]<=v2[j]){
            temp[k++]=v1[i];
            i++;
        }
        else {
            temp[k++]=v2[j];
            j++;
        }
    }
    while(i<n){
        temp[k++]=v1[i];
        i++;
    }
    while(j<t){
        temp[k++]=v2[j];
        j++;
    }
    for(int i=0;i<p;i++){
        cout<<temp[i]<<" ";
    }
}