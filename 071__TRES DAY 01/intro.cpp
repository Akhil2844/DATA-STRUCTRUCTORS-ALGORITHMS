#include<iostream>
#include<queue>
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

 node*buildTree(node* root)
 {
   cout<<"Enter the data "<<endl;
   int data;
   cin>>data;

   root=new node(data);
    
  if(data==-1)
  {
    return NULL;
  }  

  cout<<"Enter the data inserting at left "<<data<<endl;
  root->left=buildTree(root->left);

  cout<<"Enter the data inserting at right "<<data<<endl;
  root->right=buildTree(root->right);

  return root;

 } 

 void levelOrderTraversal(node*root)
 {
    queue<node*>q;
   q.push(root);
    
    q.push(NULL);

while(!q.empty())
{
      node*temp=q.front();
      q.pop();

      if(temp==NULL)
      {
        cout<<endl;  // purana level complete ho chuka h
        if(!q.empty())
      {
        // queue still have some child nodes
        q.push(NULL);
      }
      }

      else
      {
        cout<<temp->data<<" ";
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
      }

}

  

}
    
    



 int main()
 {  
    node* root=NULL;
  
   // Creating a tree
    root=buildTree(root);

    // creating a level order traversal tree
    levelOrderTraversal(root);

    return 0;
 }