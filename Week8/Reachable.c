#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "Graph.h"
#include "IntSet.h"

#define T true
#define F false

Set reachable(Graph g, Vertex src);
void reachableR(Graph g, Vertex src, Set visited);

// Tests reachable
int main(int argc, char *argv[]) {
	// Slide 7 graph
	Edge edges[] = {
		{0, 1}, {0, 2}, {0, 3},
		{2, 1}, {2, 3}, {2, 4},
		{2, 5}, {3, 0}, {3, 4},
		{4, 2}, {4, 5}, {4, 7},
		{4, 8}, {5, 1}, {6, 5},
		{6, 7}, {6, 9}, {7, 4},
		{7, 5}, {7, 8}, {8, 7},
		{9, 7}, {9, 8}
	};

	Graph g = GraphNewFromEdgeArray(10, 23, edges);

	IntSetPrint(reachable(g, 0));
	IntSetPrint(reachable(g, 1));
	IntSetPrint(reachable(g, 5));
	IntSetPrint(reachable(g, 6));

	/**
	 * Expected output:
	 * 	{0, 1, 2, 3, 4, 5, 7, 8}
	 *	{1}
	 *	{1, 5}
	 *	{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	 */

	GraphFree(g);
}

Set reachable(Graph g, Vertex src) {
	...
}