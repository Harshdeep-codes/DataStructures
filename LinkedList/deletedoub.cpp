#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val){

    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {

    head->prev=n;
    }

    n=head;
}
void display(node* head){
node* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<"-";
    temp=temp->next;
}
cout<<endl;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head->next=head;
    head->prev=NULL;
    delete todelete;
}

void deletion(node* &head,int pos){
node*temp=head;
int count=1;
if (pos=1)
{
    deleteAtHead(head);
    return;
}

while(temp->next!=NULL && count!=pos){
    temp=temp->next;
    count++;
}
temp->prev=temp->next;
temp->next=temp->prev;
delete temp;
}
void insertAtTail(node* &head, int val){
    if (head==NULL)
    {
        insertAtHead(head,val);
    }
    node* n=new node(val);
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}


int main(){

    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    // deletion(head,3);
    // display(head);
    return 0;
}