#include<iostream>
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

    // DESTRUCTOR
    ~Node()
{
    int value=this->data;
    if(this->next!=NULL)
    {
        delete next;
        this->next=NULL;
    }
 cout<<"Memory free for this node at this data is "<<value<<endl;
}
};

void InsertatNode(Node*&tail,int element,int d)
{

    // empty list
    if(tail==NULL)
    {
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;

    }

    else
    {
      // non empty list
    //   assuming that the element is present in the last
       
       Node*curr=tail;
       while(curr->data!=element)
       {
        curr=curr->next;

       }
       

       // element found -> currr is responding element wala node
       Node*temp=new Node(d);
       temp->next=curr->next;
       curr->next=temp;

    }
}
 
void print(Node* tail)
{
  Node*temp=tail;

    if(tail==NULL)
    {
        cout<<"List is empty "<<endl;
    }
  do
  {
    cout<<tail->data<<" ";
    tail=tail->next;
  } while (tail!=temp);
  cout<<endl;

}

// deletion
void DeleteNode(Node*&tail,int value)
{
    // empty list
    if(tail==NULL)
    {
        cout<<"List is empty,please check again "<<endl;
        return;
    }

    else
    {
        // non empty

        // assuming that the value is present in the linked list
        Node*prev=tail;
        Node*curr=prev->next;

        while(curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        // 1 NODE LINKED LIST
        if(curr==prev)
        {
            tail=NULL;
        }

        // 2 NODE LINKED LIST
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;


    }
}


bool circularLinkedList(Node* head)
{   
    // empty list
    if(head==NULL)
    {
        return true;
    }

    Node*temp=head->next;
    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }

    if(temp==head)
    {
        return true;
    }

    return false;


}

int main()
{

    Node*tail=NULL;

    InsertatNode(tail,5,3);
    print(tail);

    InsertatNode(tail,3,5);
    print(tail);

    // InsertatNode(tail,9,11);
    // print(tail);

    // InsertatNode(tail,3,6);
    // print(tail);

    // InsertatNode(tail,6,15);
    // print(tail);

    // DeleteNode(tail,3);
    // print(tail);

    if(circularLinkedList(tail))
    {
        cout<<"Linked list is circular in nature "<<endl;
    }
    else
    {
        cout<<"Linked list is not circular in nature "<<endl;
    }
    return 0;
}