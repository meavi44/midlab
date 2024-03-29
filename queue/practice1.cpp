// u r given an array of integer nums,there is a sliding window of size k 
// which is moving from the very left of the array to the very right
// .u can only see the k nums of the window.each time the sliding window moves 
// right by one position. return the max sliding window which basically 
// contains the max element in each window.
//input
// vector 1 3 -1 -3 5 3 6 7
// output 3 3 5 5 6 7


#include<bits/stdc++.h>
using namespace std;
vector<int>maxslidigwindow(vector<int> &arr,int k){
    deque<int>dq;
    vector<int>res;
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for(int i=k;i<arr.size();i++){
        if(dq.front()==i-k)dq.pop_front();
        while(!dq.empty() && arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
}
int main(){
    int i=0,n,k=3;
    cin>>n;
    vector<int>arr(n);
    while(n--){
        
        cin>>arr[i];
        i++;
    }
   vector<int> ok=maxslidigwindow(arr, k);
   for(int i=0;i<ok.size();i++){
    cout<<ok[i]<<" ";
   }

}