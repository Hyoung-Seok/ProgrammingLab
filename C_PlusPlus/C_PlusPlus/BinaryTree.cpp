#include "BinaryTree.h"

BData GetNodeData(BNode* node)
{
	if(node != nullptr && node->data != 0)
		return node->data;

	return BData();
}

void SetNodeData(BNode* node, BData data)
{
	if (node != nullptr)
		node->data = data;
}

BNode* GetLeftSubTree(BNode* node)
{
	return (node != nullptr && node->left != nullptr) ? node->left : nullptr;
}

BNode* GetRightSubTree(BNode* node)
{
	return (node != nullptr && node->right != nullptr) ? node->right : nullptr;
}

void MakeLeftSubTree(BNode* main, BNode* sub)
{
	if (main == nullptr)
		return;

	if (main->left != nullptr)
		delete main->left;

	main->left = sub;
}

void MakeRightSubTree(BNode* main, BNode* sub)
{
	if (main == nullptr)
		return;

	if (main->right != nullptr)
		delete main->right;

	main->right = sub;
}
