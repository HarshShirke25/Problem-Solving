#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};


struct Node *newNode(int item)
{
	struct Node *temp = (struct Node *)malloc(
						sizeof(struct Node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}


Node* LCA(Node* root,Node* p,Node* q)
{
    if(root==NULL || root==p || root==q)
    {
        return root;
    }

    Node* left = LCA(root->left,p,q);
    Node* right = LCA(root->right,p,q);

    if(left==NULL)
    {
        return right;
    }

    else if(right==NULL)
    {
        return left;
    }
    else{
        return root;
    }
}




int main()
{
	Node* root = newNode(10);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(7);
	root->left->right = newNode(8);
	root->right->right = newNode(15);
	root->right->left = newNode(12);
	root->right->right->left = newNode(14);

    Node* ans;

	ans = LCA(root,root->left,root->right);
    cout<<"Lowest Common Ancestor of the given binary tree is:"<<endl;
    cout<<ans->data;

	return 0;
}

