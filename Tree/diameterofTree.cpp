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
int DiameterOfTree(Node* root){
    if (root==NULL)
    {
        return 0;
    }
    int leftdiameter = DiameterOfTree(root->left);
    int rightdiamter = DiameterOfTree(root->right);
    int maxHeight = heightoftree(root->left)+heightoftree(root->right)+1;
    return max(maxHeight,max(leftdiameter,rightdiamter));
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    cout << "The Max Diameter of this Tree is:\n";
    cout<<DiameterOfTree(root);
    return 0;
}