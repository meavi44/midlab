#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
struct BT{
    Node*root;
    int idx;
    BT(){
        root=NULL;
        idx=-1;
    }
    Node* makeTree(int arr[]){
        idx++;
        if(arr[idx]==-1){
            return NULL;
        }
        Node* newNode=new Node(arr[idx]);
        newNode->left=makeTree(arr);
        newNode->right=makeTree(arr);
        return newNode;
    }
};
int main(){
    int arr[]={10,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    BT binaryTree;
    Node*temp=binaryTree.makeTree(arr);
    cout<<temp->data;
}