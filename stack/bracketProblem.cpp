// assume u have all the parenthesis and u need to find out 
// the min number of deleteion to make the the parenthesis balanced

#include<bits/stdc++.h>
using namespace std;
int balance(string s){
    int ctr=0;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='('){
            st.push(ch);
        }
        else if(!st.empty() && ch==')'){
            st.pop();
        }
        else{
            ctr++;
        }
    }
    return ctr;
}
int main(){
    string s;
    cin>>s;
    int k=balance(s);
    cout<<k;
}