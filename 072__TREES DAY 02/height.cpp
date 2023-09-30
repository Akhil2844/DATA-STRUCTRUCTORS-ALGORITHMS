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

 int height(node* node)
 {
    // base case
    if(node==NULL)
    {
        return 0;
    }

    int left=height(node->left);
    int right=height(node->right);
    int ans=max(left,right)+1;

    return ans;
 }

 int main()
 {
    // Creating a simple binary tree
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(7);
    root->right->right=new node(6);
    root->right->right->left=new node(8);
    root->right->right->left->left=new node(9);

    // Call the height function to find the height of the binary tree
    int treeHeight = height(root);

    cout << "Height of the binary tree is: " << treeHeight << endl;



    return 0;
 }