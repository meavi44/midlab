//you r given an array of k linkedlist.each of them is on sorted order now u need to merge them in one linkedlist
//merged linked list will also be sorted

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
Node* mergeAll(vector<Node*>&list){
    while(list.size()>1){
        Node* temp=merge(list[0],list[1]);
        list.push_back(temp);
        list.erase(list.begin());
         list.erase(list.begin());

    }
    return list[0];
}
int main(){
    LinkedList li;
    li.insert(1);
     li.insert(5);
      li.insert(7);
       li.insert(9);
        li.insert(10);
        LinkedList li2;
        
     li2.insert(2);
      li2.insert(3);
       li2.insert(4);
       LinkedList li3;
         li3.insert(6);
       li3.insert(8);
       vector<Node*>list;
       list.push_back(li.head);
       list.push_back(li2.head);
       list.push_back(li3.head);
       LinkedList li4;
       li4.head=mergeAll(list);
       li4.display();
    
}