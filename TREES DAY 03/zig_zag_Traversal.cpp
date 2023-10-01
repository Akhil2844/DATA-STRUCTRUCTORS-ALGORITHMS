#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> zigZag(node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    queue<node *> q;
    q.push(root);
    bool leftToRight = true; // This variable keeps track of the traversal direction.

    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            node *frontNode = q.front();
            q.pop();

            // Calculate the index based on the traversal direction.
            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }

        leftToRight = !leftToRight; // Toggle the traversal direction.

        // Append the values of the current level to the result vector.
        for (auto i : ans)
        {
            result.push_back(i);
        }
    }

    return result;
}

int main()
{
    // Creating a simple binary tree
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->left = new node(7);
    root->right->right = new node(6);
    root->right->right->left = new node(8);
    root->right->right->left->left = new node(9);

    vector<int> result = zigZag(root);

    cout << "Result is : ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;

    return 0;
}