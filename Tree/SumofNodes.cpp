#include <bits/stdc++.h>
using namespace std;
  
struct Node
{
    int data;
    struct Node* left, *right;
};
  
int SumofNodes(struct Node* root)
{
    if (root == NULL)
    {
       return 0;
    }
    return SumofNodes(root->left) + SumofNodes(root->right) + root->data;
    
}
  
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
  

int main(void)
{
    struct Node *root = newNode(1);
    root->left    = newNode(1);
    root->right   = newNode(1);
    root->left->right = newNode(1);
    root->left->right->left = newNode(1);
    root->left->right->right = newNode(1);
    root->right->right = newNode(1);
    root->right->right->left = newNode(2);
  
    cout << SumofNodes(root);
  
    return 0;
}