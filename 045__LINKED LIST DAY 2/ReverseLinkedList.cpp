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

    LinkedListNode* reverseLinkedList(LinkedListNode* &head)
{
     if(head==NULL||head->next==NULL)
     {
        return head;
     }


LinkedListNode* prev=NULL;
LinkedListNode* curr=head;
LinkedListNode* forward=NULL;

while(curr!=NULL)
{
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
}
return prev;
}


int main()
{
  // Create a linked list
    LinkedListNode* head = new LinkedListNode(1);
    head->next = new LinkedListNode(2);
    head->next->next = new LinkedListNode(3);

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






