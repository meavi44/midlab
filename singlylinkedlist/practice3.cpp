// printing a linkedlist in reverse order


#include<bits/stdc++.h>
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
class linkedList{
    public:
    Node* head;
  linkedList(){
    head=NULL;
  }
  void insert(int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
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
void reverse(Node* &head){
    if(head==NULL){
        return;
    }
    reverse(head->next);
    cout<<head->val<<" ";
}

int main(){
    int n,value;
    linkedList li;
    cin>>n;
    while(n--){
        cin>>value;
        li.insert(value);
    }
    li.display();
    reverse(li.head);
  



}