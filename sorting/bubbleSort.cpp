// bubblesort

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int flag=false;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                flag=true;
            swap(v[j],v[j+1]);
            }
        }
        if(flag==false){
            break;
        }
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
    bubbleSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}