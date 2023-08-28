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


};

 Node*kreverse(Node* head,int k)
 {
    // base case
    if(head==NULL)
    {
        return NULL;
    }

    // count the remaining nodes
    Node*temp=head;
    int cont=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        cont++;
    }

    // if remaining nodes are less than k t, no need to reverse
    if(cont<k)
    {
        return head;
    }


    // step 1: reverse the first k node
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=NULL;
    int count=0;
    while(curr!=NULL && count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }


    // step 2:: recursive call
    if(forward!=NULL)
    {
        head->next=kreverse(forward,k);
    }

    // step 3:: output of the response
    return prev;
 }

int main()
{
    // creating a Node
    Node*head=new Node(5);
    head->next=new Node(4);
    head->next->next=new Node(3);
    head->next->next->next=new Node(7);
    head->next->next->next->next=new Node(9);
    head->next->next->next->next->next=new Node(2);
    int k=4;

    // call a k group node
    Node*kreversed=kreverse(head,k);

    // print the node
    while(kreversed!=NULL)
    {
        cout<<kreversed->data<<" ";
        kreversed=kreversed->next;
    }
    return 0;
}