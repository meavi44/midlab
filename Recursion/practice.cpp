//first and last occurence in a string of a element
#include<bits/stdc++.h>
using namespace std;
void occurence(string str,int idx,int len,int *fst,int *last,char a){
    if(idx==len-1){
        return;
    }
    if(str[idx]=='a'){
        if(*fst==-1){
            *fst=idx;
        }
            *last=idx;  
    }
     occurence(str,idx+1,len,fst,last,a);
}
int main(){
    string str;
    cin>>str;
    int fst=-1,last=-1;
    occurence(str,0,str.length(),&fst,&last,'b');
    cout<<fst<<endl<<last;
}