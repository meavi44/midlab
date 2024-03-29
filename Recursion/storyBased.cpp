// there are n stones,numbered 1,2,3,....n.for each i(1<=i<=n)
// the hight of stone i is hi.there is a frog who is initially on stone 
// 1.he will repeat the following action some number of times to reach stone n.
// if the frog is currently on stone i,jump to stone i+1 or stone i+2.here a cost 
// of|hi-hj| is incurred,where j is the stone to land on.
// find the min possible total cost incurred before the frog reaches stone n.
// input n=4
// arr[10 30 40 20]
// output=30
#include<bits/stdc++.h>
using namespace std;
int min_cost(vector<int>&v,int i,int n){
    if(i==n-1) return 0;
    if(i==n-2) return min_cost(v,i+1,n)+abs(v[i]-v[i+1]);
    return min((min_cost(v,i+1,n)+abs(v[i]-v[i+1])),(min_cost(v,i+2,n)+abs(v[i]-v[i+2])));

}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<min_cost(v,0,n);
}