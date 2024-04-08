#include <iostream>
#include<vector>
using namespace std;

class TreeNode
{
public:
    int data;
   TreeNode *left;
   TreeNode *right;

    // constructor
   TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class info
{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(TreeNode * root,int &maxisize)
{
   if(root==NULL)
   {
       return {INT16_MIN,INT16_MAX,true,0};
   }

   info left=solve(root->left,maxisize);
   info right=solve(root->right,maxisize);

   info currNode;
   currNode.size=left.size+right.size+1;
   currNode.maxi=max(root->data,right.maxi);
   currNode.mini=min(root->data,left.mini);

   if(left.isBST && right.isBST && (root->data>left.maxi && root->data<right.mini))
   {
       currNode.isBST=true;
   }
   else
   {
       currNode.isBST=false;
   }

   // answer update
   if(currNode.isBST)
   {
       maxisize=max(maxisize,currNode.size);
   }
   return currNode;
}

int largestBST(TreeNode * root){
   int maxisize=0;
   info temp=solve(root,maxisize);
   return maxisize;
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(50);
    root->left = new TreeNode(30);
    root->right = new TreeNode(60);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(40);
    root->right->left = new TreeNode(70);

    // Call the largestBST function to find the size of the largest BST
    int largestBSTSize = largestBST(root);

    // Print the result
    cout << "Size of the largest BST in the binary tree: " << largestBSTSize << endl;

    // Clean up memory (not necessary for the main purpose of the code)
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
