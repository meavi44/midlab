//given the head of two linked list return the node where they intersects each other
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
    }
};
int getlength(Node* head){
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
Node* movebyK(Node* head,int k){
    Node* ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;
}
Node* getintersect(Node* head1,Node*head2){
    int l1=getlength(head1);
    int l2=getlength(head2);
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        int k=l1-l2;
        ptr1=movebyK(head1,k);
        ptr2=head2;
    }
    else{
        int k=l2-l1;
        
        ptr1=head1;
        ptr2=movebyK(head2,k);
    }
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;

}
int main(){
     int n,x,r,s;
    cin>>n>>s;
    LinkedList li1;
     
    while(n--){
        cin>>x;
        li1.insert(x);
    }
    li1.display();
     LinkedList li2;
    while(s--){
        cin>>r;
        li2.insert(r);
    }
    
    li2.display();
    // Node*temp=getintersect(li1.head,li2.head);
    // cout<<temp->val;
}
