//print an array recursively
// #include<bits/stdc++.h>
// using namespace std;
// void printArray(int arr[],int idx,int n){
//     if(idx>=n)return ;
//     cout<<arr[idx]<<" ";
//     printArray(arr,++idx,n);
//     return ;
    
// }
// int main(){
//     int arr[100];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//    printArray(arr,0,5);
  
// }


//print the max value of the array

#include<bits/stdc++.h>
using namespace std;
int printMax(int arr[],int idx,int n,int max){
    if(idx>=n) return max;
  
   if(max<arr[idx]){
    max=arr[idx];
   }

 
    return printMax(arr,++idx,n,max);
    
    
    
}
//another approach
int printmax(int arr[],int idx,int n){
    if(idx==n-1) return arr[idx];
  
   
 
    return max(arr[idx],printmax(arr,++idx,n));
    
    
    
}
//sum of all the elements
int sum(int arr[],int idx,int n){
    if(idx==n-1) return arr[idx];
  
   
 
    return arr[idx]+sum(arr,++idx,n);
    
    
    
}
int main(){
    int arr[100];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
//    int result=printmax(arr,0,5);
//    cout<<result;
int result=sum(arr,0,5);
cout<<result;
  
}
