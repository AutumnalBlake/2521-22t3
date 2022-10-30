#include <stdlib.h>
#include <stdio.h>
#include "BSTree.h"

// 3. Write a recursive function to count the total number of nodes in a tree.
int BSTreeNumNodes(BSTree t) {
	return -99;
}

// 4. Implement the following function that counts the number of odd values in a tree.
int BSTreeCountOdds(BSTree t) {
	return -99;	
}

// 5. Write a recursive function to compute the height of a tree.
// The height is defined as the length of the longest path from the root to a leaf.
// The path length is a count of the number of links (edges) on the path.
int BSTreeHeight(BSTree t) {
	return -99;
}

// 6. Implement the following function to count number of internal nodes in a given tree.
// An internal node is a node with at least one non-empty subtree.
int BSTreeCountInternal(BSTree t) {
	return -99;
}

// 7. Implement the following function that returns the level of the node containing
// a given key if such a node exists, otherwise the function returns -1.
int BSTreeNodeLevel(BSTree t, int key) {
	return -99;
}

// 8. Implement the following function that counts the number of values that are greater
// than a given value. This function should avoid visiting nodes that it doesn't have to visit.
int BSTreeCountGreater(BSTree t, int val) {
	return -99;
}

// 9. Implement the following function that returns the height of a given basic binary tree
// if it is height-balanced. Otherwise, if the given binary tree is not height-balanced,
// the function returns NOT_HEIGHT_BALANCED.
#define NOT_HEIGHT_BALANCED -999

int isHeightBalanced(BSTree t) {
	return -99;
}

int main(int argc, char *argv[]) {
	BSTree t = readBSTree(0);
	printBSTree(t);

	int key, val;
	printf("Enter key (q7) and val(q8): ");
	scanf("%d %d", &key, &val);
	putchar('\n');

	printf(
		"Num nodes:\t%d\n"
		"Num odd values:\t%d\n"
		"Height:\t\t%d\n"
		"Num internal:\t%d\n"
		"Level of %d:\t%d\n"
		"Num > %d:\t%d\n"
		"Height balance:\t%d\n",

		BSTreeNumNodes(t),
		BSTreeCountOdds(t),
		BSTreeHeight(t),
		BSTreeCountInternal(t),
		key, BSTreeNodeLevel(t, key),
		val, BSTreeCountGreater(t, val),
		isHeightBalanced(t)
	);

	freeBSTree(t);
}