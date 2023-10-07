#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node*root,int d)
{
    // base case
    if(root==NULL)
    {
        root=new Node(d);
        return root;
    }

    if(d>root->data)
    {
      root->right=insertIntoBST(root->right,d);
    }
    else
    {
        root->left=insertIntoBST(root->left,d);
    }

    return root;
}


void takeInput(Node* &root)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        root=insertIntoBST(root,data);
        cin>>data;
        
    }
}


 void levelOrderTraversal(Node*root)
 {
    queue<Node*>q;
   q.push(root);
    
    q.push(NULL);

while(!q.empty())
{
      Node*temp=q.front();
      q.pop();

      if(temp==NULL)
      {
        cout<<endl;  // purana level complete ho chuka h
        if(!q.empty())
      {
        // queue still have some child Nodes
        q.push(NULL);
      }
      }

      else
      {
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
      }

}
}
   
    void inorder(Node*root)
    {
        // base case
        if(root==NULL)
        {
            return;
        }

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    void preorder(Node*root)
    {
        // base case
        if(root==NULL)
        {
            return;
        }

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(Node*root)
    {
        // base case
        if(root==NULL)
        {
            return;
        }

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

int main()
{

    Node*root=NULL;

    cout<<"Enter data to create BST : "<<endl
    
    ;
    
    takeInput(root);

    levelOrderTraversal(root);

    cout<<"Inorder Traversal is : "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"preorder Traversal is : "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal is : "<<endl;
    postorder(root);

    return 0;
}
