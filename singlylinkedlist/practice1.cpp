//delete alternate elements
// input->1 2 3 4
// output->1 3
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
void deleteAtalternate(Node * &head){
    Node* temp=head;
    while(temp!=NULL&&temp->next!=NULL){
        Node* del=temp->next;
        temp->next=temp->next->next;
        free(del);
        temp=temp->next;

    }
}
int main()
{
    int value,n;
    linkedList li;
    cin>>n;
    while(n--){
        cin>>value;
        li.insert(value);
    }
    li.display();
    deleteAtalternate(li.head);
    li.display();
}