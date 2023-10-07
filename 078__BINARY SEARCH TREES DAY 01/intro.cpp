#include <iostream>
#include <queue>
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

Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl; // purana level complete ho chuka h
            if (!q.empty())
            {
                // queue still have some child Nodes
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}


Node* minValue(Node *root)
{
    Node*temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node *root)
{
    Node*temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}


// ****************** DELETION *************
Node*deleteFromBSTcode(Node*root,int x)
{ 
    // base case
    if(root==NULL)
    {
        return root;
    }

    if(root->data==x)
    {
        // 0 Child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        // 1 Child
           
        // left child
         if(root->left!=NULL && root->right==NULL)
         {
            Node*temp=root->left;
            delete root;
            return temp;
         }
        // right child
        if(root->right!=NULL && root->left==NULL)
        {
            Node*temp=root->right;
            delete root;
            return temp;
        }


        // 2 child
       if(root->left!=NULL && root->right!=NULL)
       {
        // right pRT K liye

        // int mini=minValue(root->right)->data;
        // root->data=mini;
        // root->right=deleteFromBSTcode(root->right,mini);
        // return root;

        // left part k liye

        int maxi=maxValue(root->left)->data;
        root->data=maxi;
        root->left=deleteFromBSTcode(root->left,maxi);
        return root;
       }

    }

    else if(root->data>x)
    {
        // left part m jao
        root->left=deleteFromBSTcode(root->left,x);
        return root;
    }

    else
    {
        // right part  jao
        root->right=deleteFromBSTcode(root->right,x);
        return root;
    }


}


int main()
{

    Node *root = NULL;

    cout << "Enter data to create BST : " << endl;

    takeInput(root);

    levelOrderTraversal(root);

    cout << "Inorder Traversal is : " << endl;
    inorder(root);
    cout << endl;

    cout << "preorder Traversal is : " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal is : " << endl;
    postorder(root);

    cout<<endl<<"Minimum value is : "<<minValue(root)->data<<endl;

    cout<<"Maximum value is : "<<maxValue(root)->data<<endl;

// ************DELETION ************
    deleteFromBSTcode(root,50);
    
  levelOrderTraversal(root);

    cout << "Inorder Traversal is : " << endl;
    inorder(root);
    cout << endl;

    cout << "preorder Traversal is : " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal is : " << endl;
    postorder(root);

    cout<<endl<<"Minimum value is : "<<minValue(root)->data<<endl;

    cout<<"Maximum value is : "<<maxValue(root)->data<<endl;
    return 0;
}
