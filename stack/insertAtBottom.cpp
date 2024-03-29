#include<bits/stdc++.h>
using namespace std;
void insertion(stack<int>&st1,int insert){
    stack<int> temp;
    for(int i=st1.size()-1;i>=0;i--){
        int x=st1.top();
        st1.pop();
        temp.push(x);

    }
   
    st1.push(insert);
    
    for(int i=temp.size()-1;i>=0;i--){
        int k=temp.top();
        temp.pop();
        st1.push(k);
    }
    
}
int main(){
    int n,t;
    stack<int> st1;
    cin>>n;
    while(n--){
        cin>>t;
        st1.push(t);
    }
    insertion(st1,5);
    cout<<endl;
    for(int i=st1.size()-1;i>=0;i--){
        cout<<st1.top()<<" ";
        st1.pop();
    }
}