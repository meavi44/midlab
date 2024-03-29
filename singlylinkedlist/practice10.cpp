//given two sorted linkedlist and u have to merge them in a single linkedlist so that
// the single list will also sorted
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
Node* merge(Node*&head1,Node*&head2){
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* dummy=new Node(-1);    
    Node*ptr3=dummy;
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1->val<ptr2->val){
            ptr3->next=ptr1;
            // ptr3=ptr3->next;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1!=NULL){
        ptr3->next=ptr1;
    }
    if(ptr2!=NULL){
        ptr3->next=ptr2;
    }
    return dummy->next;
}
 
int main(){
    LinkedList li1;
    LinkedList li2;
    li1.insert(1);
     li1.insert(2);
      li1.insert(3);
       li1.insert(4);
        li1.insert(5);
        li2.insert(3);
     li2.insert(4);
      li2.insert(6);
   
    LinkedList li3;
    li3.head=merge(li1.head,li2.head);
    li3.display();
    
}