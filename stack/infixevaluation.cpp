//infixevaluation example 1+2*(5-3)*4

#include<bits/stdc++.h>
using namespace std;
int calculation(int v1,int v2,char op){
    if(op=='^')return pow(v1,v2);
    else if(op=='*')return v1*v2;
     else if(op=='/')return v1/v2;
      else if(op=='+')return v1+v2;
      else return v1-v2;
}
int precedence(char ch){
    if(ch=='^') return 3;
    else if(ch=='*'|| ch=='/') return 2;
    else if(ch=='+'|| ch=='-') return 1;
    else return -1;
}
int evaluaton(string s){
    stack<int>st1;
    stack<char>st2;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch>='0'&&ch<='9'){
            int k=ch-'0';
            st1.push(k);
        }
        else if(ch=='('){
            st2.push(ch);
        }
        else if(ch==')'){
            while(!st2.empty()&&st2.top()!='('){
                char opert=st2.top();
                st2.pop();
                int v2=st1.top();
                st1.pop();
                int v1=st1.top();
                st1.pop();
                st1.push(calculation(v1,v2,opert));
            }
            if(!st2.empty()) st2.pop();
        }
        else{
            while(!st2.empty() && precedence(st2.top())>=precedence(ch)){
                char opert=st2.top();
                st2.pop();
                int v2=st1.top();
                st1.pop();
                int v1=st1.top();
                st1.pop();
                st1.push(calculation(v1,v2,opert));
            }
            st2.push(ch);
        }
    }
    while(!st2.empty()){
             char opert=st2.top();
                st2.pop();
                int v2=st1.top();
                st1.pop();
                int v1=st1.top();
                st1.pop();
                st1.push(calculation(v1,v2,opert));
    }
    return st1.top();
}


int main(){
    string s;
    cin>>s;
    cout<<evaluaton(s);

}