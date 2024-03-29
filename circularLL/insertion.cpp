#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* next;
    node(int a){
        val=a;
        next=NULL;
    }
};
struct circularll{
    node* head;
    circularll(){
        head=NULL;
    }
    void inserthead(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=newnode;
            newnode->next=head;
            return;
        }
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newnode;
        newnode->next=head;
        head=newnode;
    }
    void inserttail(int val){
        node* newnode=new node(val);
        if(head==NULL){
            head=newnode;
            newnode->next=head;
            return;
        }
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newnode;
        newnode->next=head;
        return;
    }
    void deleteend(){
        if(head==NULL){
            return;
        }
        node* tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        node*temp=tail->next;
        tail->next=head;
        free(temp);
    }
   

    void display(){
        node* temp=head;
        do{
            cout<<temp->val<<" ";
            temp=temp->next;
        }while(temp!=head);
    }
};
 void deletestart(node* &head){
      
        if(head==NULL){
            return;
        }
        node* temp=head;
        node*tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(temp);
    }
int main(){
    int n,t;
    circularll li;
    cin>>n;
    while(n--){
        cin>>t;
        li.inserttail(t);
    }
    li.deleteend();
    li.display();
}
