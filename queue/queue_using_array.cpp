#include<bits/stdc++.h>
using namespace std;
struct Queue{
   
    int start;
    int back;
    vector<int>v;
    Queue(){
        start=-1;
        back=-1;

    }
    void enqueue(int val){
        
        v.push_back(val);
        back++;
        if(back==0)start=0;
    }
    void dequeue(){
        if(start==back){
            start=-1;
            back=-1;
            v.clear();
        }
        else{
        start++;
        }
    }
    int front(){
        if(start==-1)return -1;
        return v[start];
    }
    bool empty(){
        return start==-1;
    }
};
int main(){
  
   Queue qq;
   qq.enqueue(49);
    qq.enqueue(42);
     qq.enqueue(41);
      qq.dequeue();
       
       qq.enqueue(54);
       while(!qq.empty()){
        cout<<qq.front()<<" ";
        qq.dequeue();
       }
       cout<<endl;
       qq.enqueue(100);
       cout<<qq.front()<<endl;


}
