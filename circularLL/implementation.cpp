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
struct circularLL{
    Node* head;
    circularLL(){
        head=NULL;
    }
    void insertAtstart(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            newnode->next=head;
        }
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newnode;
        newnode->next=head;
        head=newnode;

    }
    void display(){
        Node*temp=head;
        do{
            cout<<temp->val<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;
    }

};
void checkCircular(Node* head){
    Node* temp=head;
    for(int i=0;i<10;i++){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    circularLL li;
    li.insertAtstart(5);
     li.insertAtstart(1);
      li.insertAtstart(2);
      li.display();
     checkCircular(li.head);

}