#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>qu;
    qu.push(1);
      qu.push(2);
        qu.push(3);
        qu.pop();
          qu.push(6);
          while(!qu.empty()){
            cout<<qu.front()<<" ";
            qu.pop();
          }

}