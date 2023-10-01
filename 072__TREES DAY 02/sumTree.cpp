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

pair<bool,int> sumFast(node*node)
{
    // base case
    if(node==NULL)
    {
        pair<bool,int>p=make_pair(true,0);
        return p;
    }

    if(node->left==NULL && node->right==NULL)
    {
        pair<bool,int>p=make_pair(true,node->data);
        return p;
    }

    pair<bool,int>left=sumFast(node->left);
    pair<bool,int>right=sumFast(node->right);

    bool leftAns=left.first;
    bool rightAns=right.first;
    bool cond=node->data==left.second+right.second;
    pair<bool,int>ans;

    if(leftAns && rightAns &&cond)
    {
           ans.first=true;
        ans.second = node->data + left.second + right.second;
    }
    else
    {
        ans.first=false;
    }
    return ans;
}


bool isSumTree(node* node)
{
    return sumFast(node).first;
}

int main()
 {
    // Creating a simple binary tree
   /*
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(7);
    root->right->right=new node(6);
    root->right->right->left=new node(8);
    root->right->right->left->left=new node(9);
    */


       // Creating a sample binary tree
    // node* root = new node(10);
    // root->left = new node(3);
    // root->right = new node(7);
    // root->left->left = new node(1);
    // root->left->right = new node(2);
    // root->right->right = new node(7);


node*root=new node(3);
root->left=new node(1);
root->right=new node(2);

   // Check if the tree is a Sum Tree
    if (isSumTree(root)) {
        cout << "The tree is a Sum Tree." << endl;
    } else {
        cout << "The tree is not a Sum Tree." << endl;
    }


    return 0;
 }