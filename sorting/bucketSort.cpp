//bucket sort when range of element is 0-1


#include<bits/stdc++.h>
using namespace std;
void bucketSort(vector<float>&v){
    int n=v.size();
    vector<vector<float>> vect(n,vector<float>());
    for(int i=0;i<n;i++){
        int index=v[i]*n;
        vect[index].push_back(v[i]);
    }
    for(int i=0;i<n;i++){
        if(!vect[i].empty()){
            sort(vect[i].begin(),vect[i].end());
        }
    }
int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<vect[i].size();j++){
            v[k++]=vect[i][j];
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<float>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bucketSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}