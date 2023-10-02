#include <iostream>
#include <vector>
#include<queue>

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

vector<int> diagonal(Node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        // Traverse the current diagonal
        while (current) {
            ans.push_back(current->data);

            if (current->left) {
                q.push(current->left);
            }

            current = current->right;
        }
    }

    return ans;
}

int main()
{

    // Creating a simple binary tree
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->right->right = new Node(6);
    root->right->right->left = new Node(8);
    root->right->right->left->left = new Node(9);

    vector<int> result = diagonal(root);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}