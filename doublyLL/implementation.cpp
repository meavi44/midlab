#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node* prev;
    Node(int a){
        val=a;
        prev=NULL;
        next=NULL;
    }
};
struct doublyLinkedList{
    Node* head;
    Node* tail;
    doublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertAtstart(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
      
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return;

    }
    void insertAtLast(int val){
        Node* newnode=new Node(val);
        if(tail==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
        return;



    }
    void insertAtposition(int val,int k){
        Node* newnode=new Node(val);
        Node* temp=head;
        int ctr=0;
        while(ctr!=k-1){
            temp=temp->next;
            ctr++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        temp->next->prev=newnode;
        return;
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
void deleteAtfirst(Node* &head,Node* &tail){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    if(head==NULL){
        tail=NULL;
    }
    else{
        head->prev=NULL;
    }
    free(temp);
    return;

}
void deleteAtlast(Node*&head,Node*&tail){
    if(head==NULL){
        return;
    }
    Node* temp=tail;
    tail=tail->prev;
    if(tail==NULL){
        head=NULL;
    }
    else{
        tail->next=NULL;
    }
    free(temp);
    return;
}
void deleteAtposition(Node*&head,int k){
    Node* temp=head;
    int ctr=0;
    while(ctr!=k-1){
        temp=temp->next;
        ctr++;
    }
   Node* del=temp;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(del);
    return;

}


int main(){
    doublyLinkedList li;
    
    li.insertAtstart(5);
    li.insertAtstart(4);
    
    //    li.display();
    // li.insertAtposition(0,1);
    // // li.insertAtstart(8);
    // // li.insertAtstart(0);
    // // li.insertAtstart(1);
    // li.display();
   

}