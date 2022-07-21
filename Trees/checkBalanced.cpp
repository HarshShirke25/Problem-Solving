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


int dfsHeight(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int leftHeight = dfsHeight(root->left);
    if(leftHeight == -1) return -1;
    int rightHeight = dfsHeight(root->right);
    if(rightHeight == -1) return -1;

    if(abs(leftHeight-rightHeight)>1) return -1;

    return max(leftHeight,rightHeight) + 1;

}


bool isBalanced(Node* root)
{
    return dfsHeight(root) != -1;
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
 
    if(isBalanced(root)){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }
 
    return 0;
}
