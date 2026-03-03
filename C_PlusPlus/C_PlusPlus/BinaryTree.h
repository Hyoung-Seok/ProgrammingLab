#pragma once
using BData = int;

struct BNode
{
	BData data;
	BNode* left = nullptr;
	BNode* right = nullptr;
};

BData GetNodeData(BNode* node);
void SetNodeData(BNode* node, BData data);

BNode* GetLeftSubTree(BNode* node);
BNode* GetRightSubTree(BNode* node);

void MakeLeftSubTree(BNode* main, BNode* sub);
void MakeRightSubTree(BNode* main, BNode* sub);

void InorderTraverse(BNode* node, void (*visit)(BNode*));
void PreorderTraverse(BNode* node);
void PostorderTraverse(BNode* node, void (*visit)(BNode*));