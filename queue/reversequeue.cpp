#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    queue<int>qu;
    cin>>n;
    while(n--){
        cin>>t;
        qu.push(t);
    }
    stack<int>st;
    while(!qu.empty()){
        int x=qu.front();
        st.push(x);
        qu.pop();
    }
     while(!st.empty()){
        int x=st.top();
        qu.push(x);
        st.pop();
    }
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}