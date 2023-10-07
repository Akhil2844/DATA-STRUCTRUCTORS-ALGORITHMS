#include <iostream>
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

Node*createParentMapping(Node*root,int target,map<Node*,Node*>&nodeToParent)
{
   Node*res=NULL;
   queue<Node*>q;
   q.push(root);

   nodeToParent[root]=NULL;

   while(!q.empty())
   {
    Node*front=q.front();
    q.pop();

    if(front->data==target)
    {
        res=front;
    }

    if(front->left)
    {
        q.push(front->left);
        nodeToParent[front->left]=front;
    }

    if(front->right)
    {
        q.push(front->right);
        nodeToParent[front->right]=front;
    }
   }
   return res;
}

int burnTree(Node*root,map<Node*,Node*>&nodeToParent)
{
   map<Node*,bool>visited;
   queue<Node*>q;
   q.push(root);
   visited[root]=true;
   int ans=0;

while(!q.empty())
{
    bool flag=false;
    int size=q.size();
    for(int i=0;i<size;i++)
    {
        Node*front=q.front();
        q.pop();

        if(front->left && !visited[front->left])
        {
            flag=true;
            q.push(front->left);
            visited[front->left]=true;
        }

        if(front->right && !visited[front->right])
        {
            flag=true;
            q.push(front->right);
            visited[front->right]=true;
        }

        if(nodeToParent[front] && !visited[nodeToParent[front]])
        {
            flag=true;
            q.push(nodeToParent[front]);
            visited[nodeToParent[front]]=true;
        }

    }

    if(flag==true)
    {
        ans++;
    }

    


}
return ans;
}

int minTime(Node*root,int target)
{
    map<Node*,Node*>nodeToParent;
    Node*targetNode=createParentMapping(root,target,nodeToParent);
    int ans=burnTree(targetNode,nodeToParent);
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

    int result = minTime(root,8);

   cout<<"Minimum burining time is : "<<result<<endl;

   

    return 0;
}