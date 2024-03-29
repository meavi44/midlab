#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,--b);
}
int main(){
    int result=power(4,6);
    cout<<result;
}