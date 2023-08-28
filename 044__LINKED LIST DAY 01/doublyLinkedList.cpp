#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node*prev;

    // constructor
    Node(int d)
    {
       this->data=d;
       this->next=NULL;
       this->prev=NULL;
    }
    
    // destructor
    ~Node()
    {
        int value=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
    cout<<"Memory free for node with data "<<value<<endl;
    }
};

//  Traverse a Linked List
void print(Node* head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  cout<<endl;
}

// gives length of linked list
int getLength(Node* head)
{
    int len=0;
    Node*temp=head;

    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }

    return len;
}

// Insert at Head
void InsertatHead(Node* &head,Node* &tail,int d)
{
    if(head==NULL)
    {
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    

}


// Insert at tAIL
void InsertatTail(Node* &head, Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node*temp=new Node(d);
        tail=temp;
    }
    else
    {
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
    
    
}

// Insert at Position
void InsertatPosition(Node* &head,Node* &tail,int position,int d)
{
    // insert at start
    if(position==1)
    {
        InsertatHead(head,tail,d);
        return;
    }

   


     Node*temp=head;
        int cnt=1;
        while(cnt<position-1)
        {
            temp=temp->next;
            cnt++;

        }

     // insert at last position
        if(temp->next==NULL)
    {
        InsertatTail(head,tail,d);
        return;
    }

    // Insering a new Node
    Node*NodetoInsert=new Node(d);
    NodetoInsert->next=temp->next;
    temp->next->prev=NodetoInsert;
    temp->next=NodetoInsert;
    NodetoInsert->prev=temp;


}


void deleteNode(Node* &head,Node* &tail,int position)
{
    // delete first or start node
    if(position==1)
    {
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }

    // delete any middle or second node
    else
    {
        Node*curr=head;
        Node*prev=NULL;
         
          
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
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
    // Node*Node1=new Node(10);

    Node*head=NULL;
    Node*tail=NULL;
    print(head);


    cout<<getLength(head)<<endl;

    InsertatHead(head,tail,11);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    InsertatHead(head,tail,12);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    InsertatTail(head,tail,13);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    InsertatTail(head,tail,14);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    
    InsertatPosition(head,tail,4,15);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    
    InsertatPosition(head,tail,1,101);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    InsertatPosition(head,tail,7,102);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    print(head);

    deleteNode(head,tail,7);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;


      if(circularLinkedList(head))
    {
        cout<<"Linked list is circular in nature "<<endl;
    }
    else
    {
        cout<<"Linked list is not circular in nature "<<endl;
    }
    return 0;
}