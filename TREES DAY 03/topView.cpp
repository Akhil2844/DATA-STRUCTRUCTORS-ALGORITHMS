#include <iostream>
#include <vector>
#include<queue>
#include<map>
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

vector<int> topView(Node*root)
{
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }

    map<int,int>topNode;
    queue<pair<Node*,int>>q;

    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<Node*,int>temp=q.front();
        q.pop();

        Node*frontNode=temp.first;
        int hd=temp.second;

        if(topNode.find(hd)==topNode.end())
        {
            topNode[hd]=frontNode->data;
        }

        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));
        }

        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));
        }
    }

    for(auto i:topNode)
    {
        ans.push_back(i.second);
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

    vector<int> result = topView(root);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}