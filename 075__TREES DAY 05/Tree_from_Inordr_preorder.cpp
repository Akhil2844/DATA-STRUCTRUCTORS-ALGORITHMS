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
void postOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
     cout << root->data << " ";
}


int find(int in[], int element, int n) {
    for (int i = 0; i < n; i++) {
        if (in[i] == element) {
            in[i] = -1;  // Set it to a value not in the input data
            return i;
        }
    }
    return -1;  // Element not found
}


Node*solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n)
{
    // base case
    if(index>=n || inorderStart>inorderEnd)
    {
        return NULL;
    }

    // create a root node for tree
    int element=pre[index];
    index++;
    Node*root=new Node(element);

    //find element index in inorder
    int position=find(in,element,n);

    // recursive calls
    root->left=solve(in,pre,index,inorderStart,position-1,n);
    root->right=solve(in,pre,index,position+1,inorderEnd,n);

    return root;



}

Node*buildTree(int in[],int pre[],int n)
{
    int preOrderIndex=0;
    Node*ans=solve(in,pre,preOrderIndex,0,n-1,n);
    return ans;
}

int main() {
    // Example inorder and preorder traversals of a binary tree
    int inorder[] = {4, 2, 5, 1, 6, 3};
    int preorder[] = {1, 2, 4, 5, 3, 6};
    int n = sizeof(inorder) / sizeof(inorder[0]);

    Node* root = buildTree(inorder, preorder, n);

    postOrderTraversal(root);


    return 0;
}
