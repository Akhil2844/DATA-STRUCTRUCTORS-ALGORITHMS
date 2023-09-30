#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    // constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

// dextructor
~Node()
{
    int value=this->data;
    // memory free
    if(this->next!=NULL)
    {
        delete next;
        this->next=NULL;
    }
    cout<<"Memory is free for Node with data "<<value<<endl;

}




};

void InsertAtHead(Node* &head,int d )
{
    // new node create
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;


}

void InsertAtTail(Node* &tail,int d)
{
    // new tail create
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void print(Node*&head)
{
    Node*temp=head;
   while(temp!=NULL)
   {
   cout<<temp->data<<" ";
   temp=temp->next;
   }    
   cout<<endl;
}

int main()
{

    // created a new Node
    Node*node1=new Node(11);

    Node*head=node1;
    Node*tail=node1;
    
    InsertAtHead(head,12);
    
print(head);

    InsertAtTail(tail,10);
    // print(head);
    print(head);

}