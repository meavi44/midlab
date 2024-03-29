struct BinarySearchTree
{
    struct node
    {
        int val;
        struct node* left;
        struct node* right;
    };

    struct node* root=NULL;

    void insert(struct node* current,int data)
    {
        if(root==NULL)
        {
            root=(struct node *)(malloc(sizeof (node)));
            root->val=data;
            root->left=NULL;
            root->right=NULL;
            
            return;
        }

        else if(current->val <data) 
        {
            if(current->right==NULL)
            {
                struct node* temp=(struct node *)malloc(sizeof(node));
                temp->val=data;
                temp->left=temp->right=NULL;
                current->right=temp;
                return;
            }
            else 
                insert(current->right,data);
        }
        
        else 
        {
            if(current->left==NULL)
            {
                struct node* temp=(struct node *)malloc(sizeof(node));
                temp->val=data;
                temp->left=temp->right=NULL;
                current->left=temp;
                return;
            }
            else 
                insert(current->left,data);
        }
        
    }

    void traverse_inorder(node *current)
    {
        if(current==NULL)return;
        
        traverse_inorder(current->left);
        cout<<current->val<<"->";
        traverse_inorder(current->right);
        
    }

     void traverse_preorder(node *current)
    {
        if(current==NULL)return;
        cout<<current->val<<"->";
        traverse_preorder(current->left);
        traverse_preorder(current->right);
    }

    void traverse_postorder(node *current)
    {
        if(current==NULL)return;
        
        traverse_postorder(current->left);
        
        traverse_postorder(current->right);
        cout<<current->val<<"->";
    }

    bool find(node *current,int need)
    {
        if(current==NULL)return false;
        if(current->val == need)return true;

        if(current->val<need)return find(current->right,need);
        else return find(current->left,need);        
    }

    node* findmin(node* root)
  {
    while(root->left != NULL) root = root->left;
    return root;
  }

    node* findmax(node* root)
  {
    while(root->right != NULL) root = root->right;
    return root;
  }

  struct node* Delete(struct node *root, int data) 
    {
    if(root == NULL) return root; 
    else if(data < root->val) root->left = Delete(root->left,data);
    else if (data > root->val) root->right = Delete(root->right,data);
    
    else {
      
      if(root->left == NULL && root->right == NULL) { 
        delete root;
        root = NULL;
      }
      
      else if(root->left == NULL) {
        struct node *temp = root;
        root = root->right;
        delete temp;
      }
      else if(root->right == NULL) {
        struct node *temp = root;
        root = root->left;
        delete temp;
      }
      
      else { 
        struct node *temp = findmin(root->right);
        root->val = temp->val;
        root->right = Delete(root->right,temp->val);
      }
    }
    return root;
  }
    
};