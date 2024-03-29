//using linkedlist

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node(int a){
        val=a;
        next=NULL;
    }
};
struct Stack{
    int capacity;
    int current;
    Node* head;
    Stack(int c){
        capacity=c;
        current=0;
        head=NULL;

    }
    void push(int val){
        if(current==capacity-1){
            cout<<"overflow"<<endl;
            return;
        }
        Node* newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        return;

    }
    void pop(){
        if(head==NULL){
            cout<<"invalid"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        free(temp);

    }
    int top(){
        if(head==NULL){
            cout<<" invalid";
            return -3;
        }
        return head->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack st(6);
    st.push(4);
     st.push(3);
      st.push(2);
       st.push(1);
        st.push(0);
         st.push(40);
         st.display();
         st.pop();
         st.display();
         st.pop();
         st.pop();
        cout<<st.top()<<endl;
}