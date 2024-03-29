//delete duplicate elements
// input->1 1 1 2 2 3 3 3
// output->1 2 3

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next = NULL;
    Node(int a)
    {
        val = a;
        next = NULL;
    }
};
class linkedList
{
public:
    Node *head;
    linkedList()
    {
        head = NULL;
    }
    void insert(int val)
    {
        Node *newnode = new Node(val);
        if(head==NULL){
            head=newnode;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val<<" ";
            temp = temp->next;
        }
        cout << endl;
    }
};
void deleteDuplicate(Node* &head){
    Node* current=head;
    while(current!=NULL){
        while(current->next!=NULL&&current->val==current->next->val){
            Node*temp=current->next;
            current->next=current->next->next;
            free(temp);
           
        }
        current=current->next;
    }
}

int main()
{
    int value,n;
    linkedList* li=new linkedList();
    cin>>n;
    while(n--){
        cin>>value;
        li->insert(value);
    }
    li->display();
   deleteDuplicate(li->head);
    li->display();
}