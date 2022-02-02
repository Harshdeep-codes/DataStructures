#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
//reverse recursive method
node* reverseRecursive(node* &head)
{
    //Base Case
    if (head==NULL || head->next==NULL)
    {
        return head;
    }

    //Recursive Case
    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}



//creating limked list
void insertAtTail(node* &head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}


//program for printing linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

//reverse iterative method
node* reverse(node* &head)
{
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
//driver code
int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    cout<<"Original Linked list:-"<<endl;
    display(head);
    // cout<<"Reversed Using Iterative Method :-"<<endl;
    // node* newhead = reverse(head);
    // display(newhead);
    cout<<"Reversed Using Recursive Method :-"<<endl;
    node* newhead = reverseRecursive(head);
    display(newhead);
    return 0;
}

