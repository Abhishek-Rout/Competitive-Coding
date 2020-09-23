#include <iostream>
#include <cmath>
#include <float.h>

using namespace std;

class BST 
{
	public:
		int value;
		BST *left;
		BST *right;
		BST(int val);
		BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target);
int findClosestValueInBstHelper(BST *tree, int target, double closest);

// Average: O(log(n)) time | O(1) space
// Worst: O(n) time | O(1) space

int findClosestValueInBst(BST *tree, int target) {
	return findClosestValueInBstHelper(tree, target, DBL_MAX);
}

int findClosestValueInBstHelper(BST *tree, int target, double closest)
{
	BST *currentNode = tree;
	while (currentNode != NULL) 
	{
		if (abs(target - closest) > abs(target - currentNode->value)) 
		{
			closest = currentNode->value;
		}
		if (target < currentNode->value) 
		{
			currentNode = currentNode->left;
		}
		else if (target > currentNode->value)
		{
			currentNode = currentNode->right;
		}
		else
		{
			break;
		}
	}
}