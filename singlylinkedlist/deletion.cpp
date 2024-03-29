#include<bits\stdc++.h>
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
void inserthead(Node* &head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;

}
void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);

}
void deleteAtTail(Node* &head){
    Node* secondlast=head;
    while(secondlast->next->next!=NULL){
        secondlast=secondlast->next;
    }
    Node* temp=secondlast->next;
    secondlast->next=NULL;
    free(temp);
}
void deleteAtkth(Node* &head,int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    Node* prev=head;
    int current=0;
    while(current!=pos-1){
        prev=prev->next;
        current++;
    }
    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
}
void display(Node* &head){
   
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    inserthead(head,7);
    display(head);
    inserthead(head,70);
    display(head);
    inserthead(head,71);
    display(head);
    // deleteAtHead(head);
    // display(head);
    //  deleteAtHead(head);
    // display(head);
    //  deleteAtTail(head);
    // display(head);
     deleteAtkth(head,2);
    display(head);
    // deleteAtkth(head,0);
    // display(head);
    // deleteAtkth(head,1);
    // display(head);
}