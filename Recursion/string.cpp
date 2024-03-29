//remove occurence of a character using recursion



#include<bits/stdc++.h>
using namespace std;
string rmvOccCH(string s,int idx,int n){
    if(idx==n)return "";
     string crnt="";
    crnt=crnt+s[idx];
    if(s[idx]=='a')return ""+rmvOccCH(s,++idx,n);
    if(s[idx]!='a') return crnt+rmvOccCH(s,++idx,n);
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    string result=rmvOccCH(s,0,n);
    cout<<result;
}