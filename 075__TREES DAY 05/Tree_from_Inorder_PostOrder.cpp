#include <iostream>
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

void preOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
   
}


int find(int in[],int element,int n)
{
    for (int i=0;i<n;i++)
    {
        if(in[i]==element)
        {
            in[i]=-1;
            return i;
        }
    }
    return -1;
}

Node*solve(int in[],int post[],int n,int &index,int inStart,int inEnd)
{
    // base case
    if(index<0 || inStart>inEnd)
    {
        return NULL;
    }

    // create a root node for tree
    int element=post[index];
    index--;
    Node*root=new Node(element);

    // find element index in inorder
    int position=find(in,element,n);

    // recursive calls
    root->right=solve(in,post,n,index,position+1,inEnd);
    root->left=solve(in,post,n,index,inStart,position-1);

    return root;
}

Node*buildTree(int in[],int post[],int n)
{
    int postOrderIndex=n-1;
    Node*ans=solve(in,post,n,postOrderIndex,0,n-1);
    return ans;
}


int main() {
    // Example inorder and postorder traversals of a binary tree
    int inorder[] = {4, 8,2, 5, 1, 6, 3,7};
    int postorder[] = {8,4,5,2,6,7,3,1};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = buildTree(inorder, postorder, n);

    preOrderTraversal(root);


    return 0;
}
