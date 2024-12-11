#include <stdio.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

//void printTree(BTreeNode * avlRoot)
//{
//	BTreeNode * clNode;
//	BTreeNode * crNode;
//
//	printf("root node: %d \n", GetData(avlRoot));
//
//	if ((clNode = GetLeftSubTree(avlRoot)))
//		printf("left1: %d ", GetData(clNode));
//	if ((crNode = GetRightSubTree(avlRoot)))
//		printf("right1: %d\n", GetData(crNode));
//
//	if ((clNode = GetLeftSubTree(clNode)))
//		printf("left2: %d ", GetData(clNode));
//	if ((crNode = GetRightSubTree(crNode)))
//		printf("right2: %d\n", GetData(crNode));
//
//	if ((clNode = GetLeftSubTree(clNode)))
//		printf("left3: %d ", GetData(clNode));
//	if ((crNode = GetRightSubTree(crNode)))
//		printf("right3: %d\n", GetData(crNode));
//
//	if ((clNode = GetLeftSubTree(clNode)))
//		printf("left4: %d ", GetData(clNode));
//	if ((crNode = GetRightSubTree(crNode)))
//		printf("right4: %d\n", GetData(crNode));
//}
//
//int main(void)
//{
//	BTreeNode * avlRoot;
//
//	BSTMakeAndInit(&avlRoot);
//
//	BSTInsert(&avlRoot, 1);
//	BSTInsert(&avlRoot, 2);
//	BSTInsert(&avlRoot, 3);
//	BSTInsert(&avlRoot, 4);
//	BSTInsert(&avlRoot, 5);
//	BSTInsert(&avlRoot, 6);
//	BSTInsert(&avlRoot, 7);
//	BSTInsert(&avlRoot, 8);
//	BSTInsert(&avlRoot, 9);
//
//	printTree(avlRoot);
//	return 0;
//}
//

int main(void)
{
	BTreeNode * avlRoot;
	BTreeNode * clNode;
	BTreeNode * crNode;

	BTreeNode * clNode2;    
	BTreeNode * crNode2;

	BTreeNode * clNode3;
	BTreeNode * crNode3;

	BSTMakeAndInit(&avlRoot);

	BSTInsert(&avlRoot, 1);
	BSTInsert(&avlRoot, 2);
	BSTInsert(&avlRoot, 3);
	BSTInsert(&avlRoot, 4);
	BSTInsert(&avlRoot, 5);
	BSTInsert(&avlRoot, 6);
	BSTInsert(&avlRoot, 7);
	BSTInsert(&avlRoot, 8);
	BSTInsert(&avlRoot, 9);

	printf("root: %d \n", GetData(avlRoot));

	clNode = GetLeftSubTree(avlRoot);
	crNode = GetRightSubTree(avlRoot);
	printf("%d, %d \n", GetData(clNode), GetData(crNode));

	clNode2 = GetLeftSubTree(clNode);
	crNode2 = GetRightSubTree(clNode);
	printf("%d, %d \n", GetData(clNode2), GetData(crNode2));

	clNode2 = GetLeftSubTree(crNode);
	crNode2 = GetRightSubTree(crNode);
	printf("%d, %d \n", GetData(clNode2), GetData(crNode2));

	clNode3 = GetLeftSubTree(crNode2);
	crNode3 = GetRightSubTree(crNode2);
	printf("%d, %d \n", GetData(clNode3), GetData(crNode3)); 
	return 0;
}
