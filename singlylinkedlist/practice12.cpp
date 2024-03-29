//find the middle element of a given linkedlist
//ind the cycle is present on a given linkedlist
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
struct LinkedList{
    Node*head;
    Node*tail;
    LinkedList(){
        head=tail=NULL;
    }
    void insert(int a){
        Node* newnode=new Node(a);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
        tail->next=newnode;
        tail=newnode;
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
Node* findMiddle(Node*& head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
bool detectCycle(Node*&head){
     Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
    LinkedList li;
    li.insert(1);
    li.insert(2);
    li.insert(3);
    li.insert(4);
    li.insert(5);
    // li.insert(6);
    // Node* temp=findMiddle(li.head);
    li.head->next->next->next->next->next=li.head->next->next;
    cout<<detectCycle(li.head);
}