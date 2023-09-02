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

// Node*sortLinkedList(Node*head)
// {
//     int zeroCount=0;
//     int oneCount=0;
//     int twoCount=0;

//     Node*temp=head;
//     while(temp!=NULL)
//     {
//         if(temp->data==0)
//         {
//             zeroCount++;
//         }
//         else if(temp->data==1)
//         {
//             oneCount++;
//         }
//         else
//         {
//             twoCount++;
//         }
//         temp=temp->next;
//     }


//     temp=head;
//     while(temp!=NULL)
//     {
//         if(zeroCount!=0)
//         {
//             temp->data=0;
//             zeroCount--;
//         }

//         else if(oneCount!=0)
//         {
//             temp->data=1;
//             oneCount--;
//         }
//         else
//         {
//             temp->data=2;
//             twoCount--;
//         }
//         temp=temp->next;
//     }

//     return head;
// }
void InsertAtTail(Node*&tail,Node*curr)
{
    tail->next=curr;
    tail=curr;
}

Node*sortLinkedList(Node* head)
{
    Node*zeroHead=new Node(-1);
    Node*zeroTail=zeroHead;
    Node*oneHead=new Node(-1);
    Node*oneTail=oneHead;
    Node*twoHead=new Node(-1);
    Node*twoTail=twoHead;

    Node*curr=head;

    // create a seprate list of 0 1 and 2
  while(curr!=NULL)
  {
        int value=curr->data;

        if(value==0)
        {
            InsertAtTail(zeroTail,curr);

        }
        else if(value==1)
        {
            InsertAtTail(oneTail,curr);
        } else {
            InsertAtTail(twoTail, curr);
        }
        curr = curr->next;
  }

// merge 0, 1,2 list

    // EMpty list
    if(oneHead->next!=NULL)
    {
       zeroTail->next=oneHead->next;
    }

    // non empty list
    else
    {
        zeroTail->next=twoHead->next;
    }

    oneTail->next=twoHead->next;
    twoTail->next=NULL;


// setup head
head=zeroHead->next;
delete(zeroHead);
delete(oneHead);
delete(twoHead);


return head;
}
int main()
{
    // create a node
    Node*head=new Node(1);
    head->next=new Node(0);
    head->next->next=new Node(1);
    head->next->next->next=new Node(2);
    head->next->next->next->next=new Node(2);

   // sort
   Node*sort=sortLinkedList(head);

   // print
   while(sort!=NULL)
   {
    cout<<sort->data<<" ";
    sort=sort->next;
   }


    return 0;
}