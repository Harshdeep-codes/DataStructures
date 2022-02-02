#include <iostream>
using namespace std;
//creating node
class node{
    //creating data members
    public:
    int data;
    node* next;
    //crerating constructor
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head,int val)
{
    node* n = new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head, int val)
{
    //create new node n
    node* n = new node (val);
    //if linked list have no nodes
    if(head==NULL)
    {
        head=n;
        return;
    }
    //create a temp pointer for traversing
    node* temp=head;
    //traversing through linked list
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    //after reaaching at end insert n node to linked list
    temp->next=n;
}

void deletion()
void display(node* head)
{
     node*temp = head;
     while(temp!=NULL)
     {
        cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
}
int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    // insertathead(head,5);
    display(head);
    return 0;
}