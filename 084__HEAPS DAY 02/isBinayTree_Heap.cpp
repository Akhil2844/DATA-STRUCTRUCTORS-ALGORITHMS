#include <iostream>
#include <queue>
using namespace std;

// Define a struct for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class heap
{
public:
    int arr[100];
    int size;

    // constructor
    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    int countNodes(Node* tree)
    {
        // base case
        if (tree == NULL)
            return 0;

        int ans = 1 + countNodes(tree->left) + countNodes(tree->right);
        return ans;
    }

    bool isCBT(Node* tree, int index, int count)
    {
        if (tree == NULL)
            return true;

        if (index >= count)
            return false;

        else
        {
            bool left = isCBT(tree->left, 2 * index + 1, count);
            bool right = isCBT(tree->right, 2 * index + 2, count);
            return (left && right);
        }
    }

    bool isMaxOrder(Node* tree)
    {
        // leaf node
        if (tree->left == NULL && tree->right == NULL)
            return true;

        if (tree->right == NULL)
        {
            return (tree->data > tree->left->data);
        }

        else
        {
            bool left = isMaxOrder(tree->left);
            bool right = isMaxOrder(tree->right);
            return (left && right && (tree->data > tree->left->data && tree->data > tree->right->data));
        }
    }

    bool isHeap(Node* tree) {
        int index = 0;
        int totalNodes = countNodes(tree);

        if (isCBT(tree, index, totalNodes) && isMaxOrder(tree))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main() {
    // Create a sample binary tree
    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->right = new Node(5);

    // Create a heap object (not used here, but for demonstration purposes)
    heap h;

    // Call the isHeap function to check if the binary tree is a max heap
    bool isMaxHeap = h.isHeap(root);

    if (isMaxHeap) {
        cout << "The binary tree is a max heap." << endl;
    } else {
        cout << "The binary tree is not a max heap." << endl;
    }

    // Clean up memory (not necessary for the main purpose of the code)
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
