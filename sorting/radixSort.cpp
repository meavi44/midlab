//implementation of radix sort

#include<bits/stdc++.h>
using namespace std;
void count_sort(vector<int>&v,int pos){
    vector<int>freq(10,0);
      
    int n=v.size();
      vector<int>result(n);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++){
        freq[i]=freq[i]+freq[i-1];
    }
    for(int i=n-1;i>=0;i--){
        result[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=result[i];
    }
}
void radix_sort(vector<int>&v){
    int max_ele=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        max_ele=max(v[i],max_ele);
    }
    for(int pos=1;(max_ele/pos)>0;pos=pos*10){
        count_sort(v,pos);
    }
}
int main(){
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    radix_sort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}