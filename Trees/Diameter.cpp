#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
 


int height(Node* root,int& diameter)
{
    if(!root){
        return 0;
    }

    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter = max(diameter,lh+rh);

    return 1 + max(lh,rh);

}

int diameterofBinaryTree(Node* root)
{
    int diameter = 0;
    height(root,diameter);
    return diameter;
}
 
int main()
{
    /* 
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    int d = diameterofBinaryTree(root);

    cout<<d;
 
    return 0;
}
