// evaluation of postfix expression

#include<bits/stdc++.h>
using namespace std;
double postfix(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch>='0'&&ch<='9'){
            double k=ch-'0';
            st.push(k);
        }
        else{
            double a=st.top();
            st.pop();
            double b=st.top();
            st.pop();
            if(ch=='*'){
                double result=b*a;
                st.push(result);
            }
            if(ch=='/'){
                double result=a/b;
                st.push(result);
            }
            if(ch=='+'){
                double result=b+a;
                st.push(result);
            }
            if(ch=='-'){
                double result=a-b;
                st.push(result);
            }
            if(ch=='^'){
                double result=pow(a,b);
                st.push(result);
            }
        }
    }
    return st.top();
}

int main(){
    string s;
    cin>>s;
    double result=postfix(s);
    cout<<result;
}