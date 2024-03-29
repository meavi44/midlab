#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    if(b%2==0){
        int result=power(a,b/2);
        return result*result;
    }
    if(b%2!=0){
        int result=power(a,(b-1)/2);
        return a*result*result;

    }
}
int main(){
    int result=power(3,7);
    cout<<result;
}