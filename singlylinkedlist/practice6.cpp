//reverse the list k at a time
//input 1 2 3 4 5 6 k=2
//output 2 1 4 3 6 5

#include<bits/stdc++.h>
using namespace std;
struct linkedlist{
    struct node{
        int val;
        node* next;
        
        node(int a){
            val=a;
            next=NULL;
        }
    };
    node* head=NULL;
    void insert(int a){
        node* newnode=new node(a);
        if(head==NULL){
            head=newnode;
        return;
    }
        
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    node* reverse(node* &head,int k){
        node* prev=NULL;
        node* current=head;
        int ctr=0;
        while(current!=NULL && ctr!=k){
            node* temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
            ctr++;
        }
        if(current!=NULL){
        node* newnode=reverse(current,k);
        head->next=newnode;
        }
        return prev;
    }

};



int main(){
    linkedlist li;
    li.insert(6);
      li.insert(8);
        li.insert(9);
        li.insert(0);
        li.insert(1);
        li.display();
        li.head=li.reverse(li.head,4);
        li.display();
        
}