#include <iostream>
#include "BinaryTree.h"
using namespace std;

void PrintNodeData(BNode* node);

int main()
{
	auto node1 = new BNode;
	auto node2 = new BNode;
	auto node3 = new BNode;
	auto node4 = new BNode;

	SetNodeData(node1, 1);
	SetNodeData(node2, 2);
	SetNodeData(node3, 3);
	SetNodeData(node4, 4);

	MakeLeftSubTree(node1, node2); // node1의 왼쪽 서브 트리는 node2
	MakeRightSubTree(node1, node3); // node1의 오른쪽 서브 트리는 node3
	MakeLeftSubTree(node2, node4); // node2의 왼쪽 서브 트리는 node4

	cout << "중위 순회 결과" << endl;
	InorderTraverse(node1, PrintNodeData);
	cout << endl;

	return 0;
}

void PrintNodeData(BNode* node)
{
	cout << "Data : " << GetNodeData(node) << endl;
}