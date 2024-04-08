#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // constructor
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Inorder traversal function to print the tree
void inorderTraversal(Node* root) {
    if (root) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Function to flatten the binary tree into a linked list
void flatter(Node* root) {
    Node* curr = root;
    while (curr != NULL) {
        if (curr->left) {
            Node* pred = curr->left;
            while (pred->right) {
                pred = pred->right;
            }
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);

    // Printing the original tree structure (inorder traversal)
    cout << "Original Tree (Inorder Traversal): ";
    inorderTraversal(root);
    cout << endl;

    // Flatten the tree
    flatter(root);

    // Printing the flattened tree structure (inorder traversal)
    cout << "Flattened Tree (Inorder Traversal): ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
