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

int countNodes(Node* root){

    if(root==NULL){
        return 0;
    }

int leftcount = countNodes(root->left);
int rightcount = countNodes(root->right);

return leftcount+rightcount+1;
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "The Count of Nodes of this Tree is:\n";
    // printLevelOrder(root);
    cout<<countNodes(root);
    return 0;
}