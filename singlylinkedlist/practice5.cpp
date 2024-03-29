//reverse a linked list(recursive approach)


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
        // Node* head;
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
    Node* reverse(Node* &head){
        if(head==NULL || head->next==NULL){
            return head;
        }
       Node*newhead= reverse(head->next);
       head->next->next=head;
       head->next=NULL;
       return newhead;
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
    li.head=reverse(li.head);
    li.display();

}