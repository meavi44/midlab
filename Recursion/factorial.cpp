#include<bits/stdc++.h>
using namespace std;
int Fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*Fact(n-1);
}
int main(){
int result=Fact(5);
cout<<result;
}