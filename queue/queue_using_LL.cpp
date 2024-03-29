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
struct Queue{
    Node*head;
    Node*tail;
    int size;
    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void enqueue(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        tail->next=newnode;
        tail=newnode;
        size++;
    }
    void dequeue(){
        if(head==NULL){
            return;
        }
        Node* oldhead=head;
       Node* newhead=head->next;
       head=newhead;

        if(head==NULL){
            tail==NULL;
        }
        oldhead->next=NULL;
        delete oldhead;
        size--;
    }
    int getSize(){
        return size;
    }
    bool empty(){
        return head==NULL;
    }
    int front(){
        if(head==NULL){
            return -1;
        }
        return head->val;
    }
};
int main(){
    Queue qq;
    qq.enqueue(6);
     qq.enqueue(23);
      qq.enqueue(69);
       qq.dequeue();
        qq.enqueue(3);
         qq.enqueue(2);
         while(!qq.empty()){
            cout<<qq.front()<<" ";
                qq.dequeue();
         }


}
