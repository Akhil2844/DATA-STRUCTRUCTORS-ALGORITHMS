#include<iostream>
#include<map>
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




void InsertAtTail(Node* &tail,int d)
{
    // new tail create
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void InsertAtHead(Node* &head,int d )
{
    // new node create
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;


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

void InsertAtPosition(Node* &tail,Node* &head,int position,int d)
{

    // insert at start

if(position==1)
{
    InsertAtHead(head,d);
    return;
}


    Node*temp=head;
    int cnt=1;

    while(cnt<position-1)
    {
    temp=temp->next;
    cnt++;
    }

  // creating a node for d
    Node*NodeToInsert=new Node(d);
        NodeToInsert->next=temp->next;
        temp->next=NodeToInsert;


// insert at end 
if(temp->next==NULL)
{
    InsertAtTail(tail,d);
    return;
}
}



void DeleteNode(Node* &head,int position)
{

    if(position==1)
    {

        // deleting start node  
        Node*temp=head;
        head=head->next;
        // memory free start node
        temp->next=NULL;
        delete temp;
        
    }

    else
    {
        // deleting any middle node or last node
        Node*curr=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}


//   FLOYD'DETECT LOOP
   Node* findloop(Node* head)
   {
    if(head==NULL)
    {
        return NULL;

    }

    Node*slow=head;
    Node*fast=head;

    while(fast!=NULL && slow!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
    //  slow=slow->next;
    if(slow==fast)
    {
     cout<<"loop is present at data : "<<slow->data<<endl;
        return slow;
       
    }
    }
return NULL;

   }


// floud begining of node

Node*startNode(Node*head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node*intersection=findloop(head);
    Node*slow=head;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}


int main()
{

    // created a new Node
    Node*node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node 1

    Node*head=node1;
    Node*tail=node1;

    // print(head);
    print(head);

    // InsertAtHead(head,12);
    InsertAtTail(tail,12);


    // print(head);
    print(head);

    // InsertAtHead(head,15);
    InsertAtTail(tail,15);


    // print(head)
    print(head);


    InsertAtPosition(tail,head,4,22);
    print(head);

    // DeleteNode(head,4);
    //  print(head);

    // for detecting a loop
    tail->next=head->next;
    // print(head);



// check wether loop is present or not
if(findloop(head)!=NULL)
{
    cout<<"loop is present "<<endl;
}
else
{
    cout<<"Loop is not present "<<endl;
}


// start point of loop
Node*start=startNode(head);
cout<<"loop is starting at a node is : "<<start->data<<endl;

    return 0;
}