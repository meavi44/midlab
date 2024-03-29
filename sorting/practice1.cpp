// move all zeroes to the end but dont change the input sequence
// input 
// 0 5 0 3 4 2
// output 
// 5 3 4 2 0 0

#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current=v[i];
        int j=i-1;
        while(j>=0&&v[j]==0){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    while(n--){
        int i;
        cin>>v[i++];
    }
    insertionSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}