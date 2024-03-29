//using normal way


// #include<bits/stdc++.h>
// using namespace std;
// void copy(stack<int> &st1,stack<int>&st2,stack<int>&st3){
//     for(int i=st1.size()-1;i>=0;i--){
//         int k=st1.top();
//         st1.pop();
//         st2.push(k);

//     }
//     for(int i=st2.size()-1;i>=0;i--){
//         int k=st2.top();
//         st2.pop();
//         st3.push(k);

//     }
// }
// int main(){
//     int n,t;
//     stack<int> st1;
//     stack<int>st2;
//     stack<int>st3;
//     cin>>n;
//     while(n--){
//         cin>>t;
//         st1.push(t);
//     }
//     copy(st1,st2,st3);
//     for(int j=st3.size()-1;j>=0;j--){
//         cout<<st3.top()<<" ";
//         st3.pop();
//     }

    
// }

//copy using recursion

#include<bits/stdc++.h>
using namespace std;
void copy(stack<int>&st1,stack<int>&st2){
    if(st1.empty()){
        return;
    }
    int current=st1.top();
    st1.pop();
    copy(st1,st2);
    st2.push(current);
}
int main(){
    int n,t,i=0;
    stack<int> st1;
    stack<int>st2;
    stack<int>st3;
    cin>>n;
    while(n--){
        cin>>t;
        st1.push(t);
    }
    vector<int> v;
    copy(st1,st2);
    
    for(int j=st2.size()-1;j>=0;j--){
        cout<<st2.top()<<" ";
        int x=st2.top();
        v.push_back(x);
        st2.pop();
    }
    cout<<endl;
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}

