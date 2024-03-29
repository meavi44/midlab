//implementation of queue using stack(push efficient)
#include<bits/stdc++.h>
using namespace std;
struct Queue{
    stack<int>st;
    Queue(){}
 void push(int val){
        st.push(val);
    }
    void pop(){
        stack<int>temp;
        if(st.empty())return;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();

        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
    int front(){
        stack<int>temp;
        if(st.empty())return -1;
        while(st.size()>1){
            temp.push(st.top());
            st.pop();

        }
        int result=st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
    }
    bool empty(){
        return st.empty();
    }
};
int main(){
    Queue qu;
    qu.push(5);
     qu.push(55);
     qu.pop();
      qu.push(52);
       qu.push(59);
        qu.pop();
         qu.pop();
         
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    

}