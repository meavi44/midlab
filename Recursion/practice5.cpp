//print subsequence(except unique(we need hashset to implement unique))
#include<bits/stdc++.h>
using namespace std;
void subsequence(string str,int idx,string newstring){
  
    if(idx==str.size()){
        cout<<newstring<<endl;
        return;
    }
    
    subsequence(str,idx+1,newstring+str[idx]);
    subsequence(str,idx+1,newstring);
}
int main(){
    string str,newstring;
    cin>>str;
    subsequence(str,0,newstring);
}