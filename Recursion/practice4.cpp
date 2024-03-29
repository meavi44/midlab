//remove all duyplicates from the string

#include<bits/stdc++.h>
using namespace std;
void remove_dup(string str,int idx,string &newstring,int freq[]){
    if(idx==str.size()) return;
    if(freq[str[idx]-'a']==0){
        newstring+=str[idx];
         freq[str[idx]-'a']=1;
   
    }
     remove_dup(str,idx+1,newstring,freq);
    
    
}
int main(){
    string str,newstring;
    cin>>str;
    int freq[26]={0};
    remove_dup(str,0,newstring,freq);
    cout<<newstring<<endl;
}