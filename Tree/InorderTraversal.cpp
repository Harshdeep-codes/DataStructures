#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(struct Node* root){
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
    
}
void postorder(struct Node* root){
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right); 
    cout<<root->data<<" ";
}
int main(){
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
     root->left->right=new Node(5);
    root->right->right=new Node(7);
    root->right->left=new Node(6);
    cout<<"InOrder:";
    inorder(root);
    return 0;
}