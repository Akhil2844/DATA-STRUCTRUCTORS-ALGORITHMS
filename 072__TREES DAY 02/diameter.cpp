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

 //  **********APPROCH 1*************

//  int height(node* node)
//  {
//     // base case
//     if(node==NULL)
//     {
//         return 0;
//     }

//     int left=height(node->left);
//     int right=height(node->right);
//     int ans=max(left,right)+1;

//     return ans;
//  }
//  int diameter(node* node)
//  {
//     // base case
//     if(node==NULL)
//     {
//         return 0;
//     }

//     int opt1=diameter(node->left);
//     int opt2=diameter(node->right);
//     int opt3=height(node->left)+height(node->right)+1;
//     int ans=max(opt1,max(opt2,opt3));

//     return ans;
//  }




//   ********** APPROCH 2 ************
pair<int,int>diameterFast(node*root)
{
    // base case
    if(root==NULL)
    {
        pair<int,int>p=make_pair(0,0);
        return p;
    }

    pair<int,int>left=diameterFast(root->left);
    pair<int,int>right=diameterFast(root->right);

    int opt1=left.first;
    int opt2=right.first;
    int opt3=left.second+right.second+1;

    pair<int,int>ans;
    ans.first=max(opt1,max(opt2,opt3));
    ans.second=max(left.second,right.second)+1;;
    return ans;
}

int diameter(node*node)
{
    return diameterFast(node).first;
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
    int treeDiameter = diameter(root);

    cout << "Diameter of the binary tree is: " << treeDiameter << endl; 



    return 0;
 }