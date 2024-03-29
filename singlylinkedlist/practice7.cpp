
//given two linkedlist determine the linkedlist are equal or not?
//linkedlist will be equal if we have same data and the arrangement of data is alo same

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
        tail->next=newnode;
        tail=newnode;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
bool checkequal(Node*head1,Node*head2){
    Node*ptr1=head1;
    Node*ptr2=head2;
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return (ptr1==NULL&&ptr2==NULL);
}
int main(){
    int n,x,r,t;
    cin>>n>>t;
    LinkedList li1;
      LinkedList li2;
    while(n--){
        cin>>x;
        li1.insert(x);
    }
    li1.display();
    while(t--){
        cin>>r;
        li2.insert(r);
    }
    li2.display();
   cout<<checkequal(li1.head,li2.head);
}
