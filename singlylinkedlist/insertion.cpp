#include<bits\stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int a){
        val=a;
        next=NULL;
    }
};
void inserthead(Node* &head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
void inserttail(Node* &head,int val){
    Node* temp=head;
    Node* newnode=new Node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertkth(Node* &head,int val,int pos){
    Node* temp=head;
    Node* newnode=new Node(val);
    int current=0;
    while(current!=pos-1){
        temp=temp->next;
        current++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void updatekth(Node* &head,int val,int k){
    Node* temp=head;
    Node* newnode=new Node(val);
    int current=0;
    while(current!=k){
        temp=temp->next;
        current++;
    }
    temp->val=val;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main(){
    Node* head=NULL;
    inserthead(head,6);
    display(head);
    inserthead(head,8);
    display(head);
    inserttail(head,11);
    display(head);
    inserttail(head,0);
    display(head);
    insertkth(head,9,2);
    display(head);
    insertkth(head,56,2);
    display(head);
  updatekth(head,123,3);
    display(head);

}