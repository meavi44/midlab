//check whether all the bracket is balanced or not
#include<bits/stdc++.h>
using namespace std;
bool checkBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
    if(ch=='('||ch=='{'||ch=='['){
        st.push(ch);
    }
    else if(ch=='}'&& !st.empty()&&st.top()=='{'){
    st.pop();
    }
    else if(ch==')'&& !st.empty()&&st.top()=='('){
    st.pop();
    }
    else if(ch==']'&& !st.empty()&&st.top()=='['){
    st.pop();
    }
    else{
        return false;
    }
}
if(st.size()==NULL){
    return true;
}
else{
    return false;
}
}
int main(){
    string s;
    cin>>s;
    cout<<checkBalanced(s);
}