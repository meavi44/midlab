//remove the kth node of a linked list from the end
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
void deletAtKth(Node*&head,int k){
    Node*ptr1=head;
    Node*ptr2=head;
    int count=k;
    while(count--){
        ptr2=ptr2->next;
    }
    
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    Node*temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
}
int main(){
    LinkedList li;
    li.insert(3);
     li.insert(2);
      li.insert(6);
       li.insert(4);
        li.insert(8);
    li.display();
    deletAtKth(li.head,3);
    li.display();
}