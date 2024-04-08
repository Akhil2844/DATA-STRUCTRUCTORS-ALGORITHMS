git #include<iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node*next;

   // constructor
   Node(int data)
   {
    this->data=data;
    this->next=NULL;
   }

};

Node* removeDuplicates(Node*head)
{
    // empty list
    if(head==NULL)
    {
        return NULL;

    }

    // Non empty list
    Node*curr=head;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
           Node* next_next=curr->next->next;
           Node*TodeleteNode=curr->next;
           delete(TodeleteNode);
           curr->next=next_next;
        }

        else
        {
            curr=curr->next;
        }
    
    }
    return head;
}

int main()
{
    // create a node
    Node*head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(2);
    head->next->next->next=new Node(3);

   // remove deplicates
   Node*remove=removeDuplicates(head);

   // print
   while(remove!=NULL)
   {
    cout<<remove->data<<" ";
    remove=remove->next;
   }

    return 0;
}