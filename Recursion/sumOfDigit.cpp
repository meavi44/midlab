#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n%10+sum(n/10);
}
int main(){
    int result=sum(10587);
    cout<<result;
}