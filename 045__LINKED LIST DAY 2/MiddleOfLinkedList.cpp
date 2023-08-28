#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node*next;

  // constructor
  Node(int d)
  {
    this->data=d;
    this->next=NULL;
    
  }
};
    

    //  ***********APPROCH 1***************
int getlength(Node*head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}

 Node*findMiddle(Node*head)
  {
    int len=getlength(head);
    int ans=len/2;

    Node*temp=head;
    int cnt=0;
    while(cnt<ans)
    {
        
        cnt++;
        temp=temp->next;
    }
    return temp;
  }


//    ************APPROCH 2************
// Node* findMiddle(Node* head)
// {
    
//     if(head==NULL)
//     {
//         return NULL;

//     }
//     if(head->next==NULL)
//     {
//         return head;
//     }
//     // for 2 nodes
//     if (head->next->next == NULL)
//     {
//         return head->next;
//     }

//     Node* slow = head;
//     Node* fast = head->next;

//     while (fast != NULL)
//     {
//         fast = fast->next;  // Move fast twice
//         slow = slow->next;        // Move slow once

//        if(fast!=NULL)
//        {
//         fast=fast->next;
//        }   
//     }

//     return slow;
// }



int main()
{
  
  // creata a node
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    // head->next->next->next->next->next=new Node(6);
    
   
   // find middle
   Node*MiddleNode=findMiddle(head);

   cout<<MiddleNode->data<<endl;

    return 0;
}

    
