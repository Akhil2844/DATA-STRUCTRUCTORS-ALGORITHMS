#include<iostream>
using namespace std;
 class node
 {
   public:
   int data;
   node*left;
   node*right;
   
   // constructor
   node(int data)
   {
     this->data=data;
     this->left=NULL;
     this->right=NULL;

   }

 };

  node*buildTree(node* root)
 {
   cout<<"Enter the data "<<endl;
   int data;
   cin>>data;

   root=new node(data);
    
  if(data==-1)
  {
    return NULL;
  }  

  cout<<"Enter the data inserting at left "<<data<<endl;
  root->left=buildTree(root->left);

  cout<<"Enter the data inserting at right "<<data<<endl;
  root->right=buildTree(root->right);

  return root;

 } 

 void inorder(node*root,int &count)
 {
    // base case
    if(root==NULL)
    {
        return;
    }

    inorder(root->left,count);
    inorder(root->right,count);
    if(root->left==NULL && root->right==NULL)
    {
        count++;
    }
 }

int countNoOfLeafs(node*root)
{
    int count=0;
    inorder(root,count);
    return count;
}

int main()
{
    node* root = NULL;

    // Creating a tree
    root = buildTree(root);

    // Count the number of leaf nodes
    int leafCount = countNoOfLeafs(root);

    // Print the count of leaf nodes
    cout << "Number of leaf nodes: " << leafCount << endl;

    return 0;
}
