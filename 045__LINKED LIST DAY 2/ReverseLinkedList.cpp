#include<iostream>
#include<vector>
using namespace std;
class  LinkedListNode
{
    public:
    int data;
    LinkedListNode* next;

    // constructor
    LinkedListNode(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};


                // ***************   Iterative method************

//     LinkedListNode* reverseLinkedList(LinkedListNode* &head)
// {
//      if(head==NULL||head->next==NULL)
//      {
//         return head;
//      }


// LinkedListNode* prev=NULL;
// LinkedListNode* curr=head;
// LinkedListNode* forward=NULL;

// while(curr!=NULL)
// {
//     forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=forward;
// }
// return prev;
// }


                // **********Recursive method***************

// void reverse(LinkedListNode* &head,LinkedListNode* curr, LinkedListNode*prev)
// {
   
//    // base case
//    if(curr==NULL)
//    {
//     head=prev;
//     return ;
//    }

//    LinkedListNode*forward=curr->next;
//    reverse(head,forward,curr);
//    curr->next=prev;

// }

// LinkedListNode* reverseLinkedList(LinkedListNode* &head)
// {
//     LinkedListNode*prev=NULL;
//     LinkedListNode*curr=head;
//     reverse(head,curr,prev);
//     return head;
// }


//   ***************APPROCH 3 ***************
LinkedListNode* reverse1(LinkedListNode* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    LinkedListNode*chotaHead=reverse1(head->next);
    head->next->next=head;
    head->next=NULL;

    return chotaHead;

}


LinkedListNode* reverseLinkedList(LinkedListNode* head)
{
    reverse1(head);
}


int main()
{
  // Create a linked list
    LinkedListNode* head = new LinkedListNode(3);
    head->next = new LinkedListNode(5);
    head->next->next = new LinkedListNode(7);

    // Reverse the linked list
    LinkedListNode* reversedHead = reverseLinkedList(head);

    // Print the reversed linked list
   while(reversedHead!=NULL)
   {
    cout<<reversedHead->data<<" ";
    reversedHead=reversedHead->next;
   }

    return 0;
}






