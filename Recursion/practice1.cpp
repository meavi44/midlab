//move all x from the string
#include<bits/stdc++.h>
using namespace std;
string remove(string str,int idx){
   string hello;
    if(idx==str.length()){
        return hello;
    }
   
    int i=0;
    int count=0;
    if(str[idx]!='x'){
      hello=hello+str[idx];
    }
   
    return hello+remove(str,idx+1);
    
}
int main(){
    string str;
    cin>>str;
    cout<<remove(str,0)<<endl;
}