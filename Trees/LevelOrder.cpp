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

vector<vector<int>> levelOrder(Node* root)
{
	vector<vector<int>> ans;
	if(root == NULL) return ans;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int size = q.size();
		vector<int> level;
		for(int i = 0;i<size;i++)
		{
			Node* node = q.front();
			q.pop();
			if(node->left != NULL) q.push(node->left);
			if(node->right != NULL) q.push(node->right);
			level.push_back(node->data);
		}
		ans.push_back(level);
	}
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
    vector<vector<int>> ans;
 
    ans = levelOrder(root);


    for (int i = 0; i < ans.size(); i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
 
    return 0;
}
