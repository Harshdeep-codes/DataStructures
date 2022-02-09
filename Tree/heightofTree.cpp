#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left,*right;
};
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
int heightoftree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=heightoftree(root->left);
    int rightheight=heightoftree(root->right);
    return max(rightheight,leftheight)+1;
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "The Max Height of this Tree is:\n";
    cout<<heightoftree(root);
    return 0;
}