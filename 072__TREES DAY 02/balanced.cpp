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

 // **********APPROCH 1 *************
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

 bool isBalanced(node*root)
 {
      // base case
    if(root==NULL)
    {
        return 0;
    }

    bool left=isBalanced(root->left);
    bool right=isBalanced(root->right);
   bool diff=abs(height(root->left)-height(root->right))<=1;

   if(left && right && diff)
    {
       return true;

    }
    else
    {
        return false;
    }

 }



 




//   **********APPROCH 2**********
//  pair<bool,int>isBalancedFast(node*node)
//  {
//     // base case
//     if(node==NULL)
//     {
//         pair<bool,int>p=make_pair(true,0); 
//         return p;
//     }

//     pair<bool,int>left=isBalancedFast(node->left);
//     pair<bool,int>right=isBalancedFast(node->right);

//     bool leftAns=left.first;
//     bool rightAns=right.first;
//     bool diff=abs(left.second-right.second)<=1;

//     pair<bool,int>ans;
//     ans.second=max(left.second,right.second)+1;

//     if(leftAns && rightAns && diff)
//     {
//         ans.first=true;

//     }
//     else
//     {
//         ans.first=false;
//     }

//     return ans;
//  }

// bool isBalanced(node*root)
// {
//     return isBalancedFast(root).first;
// }



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
    if(isBalanced(root))
    {
        cout<<"Tree is Balanced "<<endl;
    }
    else
    {
        cout<<"Tree is not Balanced"<<endl;
    }


    return 0;
 }