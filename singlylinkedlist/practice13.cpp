//check palindrome

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
bool checkPalindrome(Node*&head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*curr=slow->next;
    Node*prev=slow;
    slow->next=NULL;
    while(curr!=NULL){
        Node* nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    Node*head1=head;
    Node*head2=prev;

    while(head2!=NULL){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
int main(){
    LinkedList li;
    li.insert(1);
    li.insert(2);
    li.insert(3);
      li.insert(3);
    li.insert(2);
    li.insert(1);
    // li.insert(6);
    // Node* temp=findMiddle(li.head);
  
    cout<<checkPalindrome(li.head);
}