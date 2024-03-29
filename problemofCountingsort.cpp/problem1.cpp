//find out mode and median

#include<bits/stdc++.h>
using namespace std;
void mode_median(vector<int>&v){
    int maxi=INT_MIN;
    int n=v.size();
    int mini=INT_MAX;
    vector<int>res(n);
    // for(int i=0;i<n;i++){
    //     mini=min(mini,v[i]);   //for negative value
    // }
    //  for(int i=0;i<n;i++){
    //     v[i]-=mini;
    // }
    for(int i=0;i<n;i++){
        maxi=max(maxi,v[i]);
    }
    vector<int>freq(maxi+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    int mode=0;
    int k=freq[0];
    for(int i=1;i<=maxi;i++){
        if(freq[i]>k){
            k=freq[i];
            mode=i;
        }
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
    // for(int i=0;i<n;i++){
    //     v[i]+=mini;                //for negative value
    // }
   float median=0.0;
    if (n % 2 != 0)
		median = v[n/2];
	else
		median = (v[(n-1)/2] +
				v[(n/2)])/2.0;

    cout<<median<<endl;
    cout<<mode<<endl;

}
int main(){
    int n,i=0,t;
    cin>>n;
    vector<int>v(n);
    while(n--){
        cin>>v[i];
        i++;
    }
   mode_median(v);
    
}