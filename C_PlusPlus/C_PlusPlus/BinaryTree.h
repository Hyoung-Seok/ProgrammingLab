#pragma once
using BData = int;

struct BNode
{
	BData data;
	BNode* left = nullptr;
	BNode* right = nullptr;
};

BNode* CreateBNode();
BData GetNodeData(BNode* node);
void SetNodeData(BNode* node, BData data);

BNode* GetLeftSubTree(BNode* node);
BNode* GetRightSubTree(BNode* node);

void MakeLeftSubTree(BNode* main, BNode* sub);
void MakeRightSubTree(BNode* main, BNode* sub);

