#include "BinaryTree.h"
#include <iostream>
using namespace std;

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

void InorderTraverse(BNode* node, void (*visit)(BNode*))
{
	if (node == nullptr)
		return;

	// 왼쪽 서브트리 부터 탐색
	InorderTraverse(node->left, visit);

	visit(node);

	// 오른쪽 서브트리 탐색
	InorderTraverse(node->right, visit);
}

void PreorderTraverse(BNode* node)
{
	if (node == nullptr)
		return;

	cout << "node : " << node->data << endl;
	PreorderTraverse(node->left);
	PreorderTraverse(node->right);
}

void PostorderTraverse(BNode* node)
{
	if (node == nullptr)
		return;

	PostorderTraverse(node->left);
	PostorderTraverse(node->right);
	cout << "node : " << node->data << endl;
}
