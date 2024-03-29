//next greater element

#include<bits/stdc++.h>.h>
using namespace std;
vector<int> nextGreater(vector<int>&v){
    int n=v.size();
    vector<int>output(n,-1);
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && v[i]>v[st.top()]){
            output[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}
int main(){
    int n,t;
    vector<int>v;
    cin>>n;
    while(n--){
        cin>>t;
        v.push_back(t);
    }
    vector<int> result=nextGreater(v);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}