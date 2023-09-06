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


Node*findmid(Node*head)
{
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

Node*merge(Node*left,Node*right)
{
    if(left==NULL)
    return right;

    if(right==NULL)
    return left;

    Node*ans=new Node(-1);
    Node*temp=ans;

    while(left!=NULL && right!=NULL)
    {
        if(left->data<right->data)
        {
        temp->next=left;
        temp=left;
        left=left->next;
        }
       else
       {
        temp->next=right;
        temp=right;
        right=right->next;
       }
    }

    while(left!=NULL)
    {
        temp->next=left;
        temp=left;
        left=left->next;
    }

    while(right!=NULL)
    {
        temp->next=right;
        temp=right;
        right=right->next;
    }



    ans=ans->next;
    return ans;


}

Node*mergeSort(Node*head)
{
    // base case
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    // find mid
    Node*mid=findmid(head);

    // divide the ll into two parts
    Node*left=head;
    Node*right=mid->next;
    mid->next=NULL;

    //recursive calls
    left=mergeSort(left);
    right=mergeSort(right);

    //merge two sorted linked list
    Node*ans=merge(left,right);

   return ans;


}
int main()
{
// create a ll
    Node*head=new Node(3);
    head->next=new Node(2);
    head->next->next=new Node(1);
    head->next->next->next=new Node(9);
    head->next->next->next->next=new Node(5);

    //call a ll
    Node*result=mergeSort(head);

    // print
    while(result!=NULL)
    {
        cout<<result->data<<" ";
        result=result->next;
    }

    return 0;
}