//gcd using recursion
#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    if(y==0){
        return x;
    }
    gcd(y,x%y);
}
int main(){
    int x,y;
    cin>>x>>y;
    int result=gcd(x,y);
    cout<<result;
    cout<<(4%2)<<endl;
}