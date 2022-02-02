#include<stdio.h>
using namespace std;

class node()
{
public:
int data;
node* next;

//Constructor
node(int val)
{
 data=val;
 next=NULL;
}

};

//Creating function for inserting elements in linked list
void inserAtATil(node* &head,int val)
{
    node *n = new node(val);
    if (head==NULL)
    {
        head = n;
        rerturn;
    }
    node* temp = head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

int main()
{
   
    return 0;
}