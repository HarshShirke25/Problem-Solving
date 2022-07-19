#include <bits/stdc++.h>
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

int maxHeight(Node* root)
{
    if(root ==  NULL)
    {
        return 0;
    }

    int left = maxHeight(root->left);
    int right = maxHeight(root->right);

    int ans = max(left,right) + 1;

    return ans;
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
    int ans;
 
    ans = maxHeight(root);

    cout<<"Maximum Height of the given tree is "<<ans;
   
    return 0;
}
