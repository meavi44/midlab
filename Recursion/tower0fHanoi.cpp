#include<bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int n,string src,string helper,string des){
    if(n==1){
        cout<<"transfer "<<src<<" to "<<des<<endl;
        return;
    }
    TowerOfHanoi(n-1,src,des,helper);
    cout<<"transfer "<<src<<" to "<<des<<endl;
    TowerOfHanoi(n-1,helper,src,des);
}
int main(){
    TowerOfHanoi(3,"a","b","c");
}