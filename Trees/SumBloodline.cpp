#include <bits/stdc++.h>

using namespace std;


struct Node {
	int data;
	Node* left, *right;
};


Node* getNode(int data)
{
	
	Node* newNode = (Node*)malloc(sizeof(Node));

	
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}


void sumOfLongRootToLeafPath(Node* root, int sum,
					int len, int& maxLen, int& maxSum)
{
	
	if (!root) {
		
		if (maxLen < len) {
			maxLen = len;
			maxSum = sum;
		} else if (maxLen == len && maxSum < sum)
			maxSum = sum;
		return;
	}


	sumOfLongRootToLeafPath(root->left, sum + root->data,
							len + 1, maxLen, maxSum);

	
	sumOfLongRootToLeafPath(root->right, sum + root->data,
							len + 1, maxLen, maxSum);
}


int sumOfLongRootToLeafPathUtil(Node* root)
{

	if (!root)
		return 0;

	int maxSum = INT_MIN, maxLen = 0;


	sumOfLongRootToLeafPath(root, 0, 0, maxLen, maxSum);

	
	return maxSum;
}


int main()
{

	Node* root = getNode(4);		 /*	 4	 */
	root->left = getNode(2);		 /*	 / \	 */
	root->right = getNode(5);	 /*	 2 5	 */
	root->left->left = getNode(7); /*	 / \ / \	 */
	root->left->right = getNode(1); /* 7 1 2 3 */
	root->right->left = getNode(2); /*	 /		 */
	root->right->right = getNode(3); /*	 6		 */
	root->left->right->left = getNode(6);

	cout << "Sum = "
		<< sumOfLongRootToLeafPathUtil(root);

	return 0;
}

