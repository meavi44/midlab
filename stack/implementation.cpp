//using array

#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int capacity;
    int* arr;
    int top;
    Stack(int val){
        capacity=val;
        arr=new int(val);
        top=-1;
    }
    void push(int val){
        if(top==capacity-1){
            cout<<"overflow";
            return;
        }
        top++;
        arr[top]=val;
        return;

    }
    void pop(){
        if(top==-1){
            cout<<"invalid";
            return;
        }
        top--;
    }
    int tops(){
        if(top==-1){
            cout<<"invalid";
            return -4;
        }
        int x=arr[top];
        return x;
    }
    void display(){
        int i=0;
        int v=top+1;
        while(v--){
            cout<<arr[i++]<<" ";

        }
    }


};
int main(){
    Stack st(4);
    st.push(4);
      st.push(2);
        st.push(1);
          st.push(7);
        //   st.display();
          st.pop();
          st.pop();
          st.display();
        // int result=st.tops();
        // cout<<result;

    
}