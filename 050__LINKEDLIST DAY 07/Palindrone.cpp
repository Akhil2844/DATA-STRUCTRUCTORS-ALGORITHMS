#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
//   ***********  APPROCH 1 ***********

/*bool checkPalindrone(vector<int> arr)
{
   int n=arr.size();
   int s=0;
   int e=n-1;

   while(s<e)
   {
    if(arr[s]!=arr[e])
    {
        return 0;
    }
    s++;
    e--;
   }
   return 1;
}

bool isPalindrone(Node*head)
{
   vector<int> arr;
   Node*temp=head;
   while(temp!=NULL)
   {
    arr.push_back(temp->data);
    temp=temp->next;
   }

   return checkPalindrone(arr);
}
*/

//  ***********APPROCH 2*********

Node *getMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *reversed(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrone(Node *head)
{
    if (head->next == NULL)
    {
        return true;
    }

    // step 1 -> find mid
    Node *mid = getMid(head);

    // step 2 -> reverse a linked list
    Node *temp = mid->next;
    mid->next = reversed(temp);

    // step-3  -> compare
    Node *head1 = head;
    Node *head2 = mid->next;

    if (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }


    // step-4  -> repeat step 2
    Node*temp1=mid->next;
    mid->next=reversed(temp1);


    return true;
}

int main()
{

    // create a node
    Node *head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(1);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(1);

    if (isPalindrone(head))
    {
        cout << "Yes there is palindrone " << endl;
    }

    else
    {
        cout << "No Palindrone Here " << endl;
    }

    return 0;
}