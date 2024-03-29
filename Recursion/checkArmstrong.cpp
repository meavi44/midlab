//check a number is armstrong or not(recursion)
#include<bits/stdc++.h>
using namespace std;
int Armstrong(int num,int x){
    if(num==0){
        return 0;

    }
    int k=Armstrong((num/10),x);
   return k+pow((num%10),x);

}
int main(){
    int num;
    cin>>num;
    int temp=num;
    int count=0;
    while(num %10!=0){
        
        count++;
        num/=10;
    }
    // cout<<count<<endl;
    int result=Armstrong(temp,count);
    if(result==temp) {
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }

}