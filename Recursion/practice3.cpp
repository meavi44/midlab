//remove all x to the end of the string
#include<bits/stdc++.h>
using namespace std;

void move_all_x(string str,int idx,int count,string &newstring){
  
   
    if(idx==str.size()){
        for(int i=0;i<count;i++){
            newstring+='x';
        }
        
        cout<<newstring;
        return;
    }
    if(str[idx]=='x'){
       count++;
    }
    else{
         newstring=newstring+str[idx];
        
         
    }
   move_all_x(str,idx+1,count,newstring);
}
int main(){
    string str,newstring;
    cin>>str;
    move_all_x(str,0,0,newstring);
   
}