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
    
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
    
    
};
void reverse(Node* &head,Node* &tail){
    Node* current=head;
    while(current!=NULL){
        Node* temp=current->next;
        current->next=current->prev;
        current->prev=current->next;
        current=temp;

    }
    Node* temp=head;
    head=tail;
    tail=temp;
    return;
}
int main(){
    doublyLinkedList ddl;
    ddl.insertAtLast(1);
    ddl.insertAtLast(2);
    ddl.insertAtLast(3);
    ddl.insertAtLast(4);
    ddl.display();
    reverse(ddl.head,ddl.tail);
    ddl.display();
}