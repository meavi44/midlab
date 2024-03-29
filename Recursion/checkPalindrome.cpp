//check a number is palindrome or not(recursion)
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int num,int *temp){
    if(num>=0 && num<=9){
        int lastD=(*temp)%10;
        (*temp)=(*temp)/10;
        return (num%10==lastD);
    }
    bool result=palindrome(num/10,temp) && (num%10==(*temp)%10);
    (*temp)/=10;
    return result;
}
int main(){
    int num;
    cin>>num;
    int k=palindrome(num,&num);
    cout<<k<<endl;

}