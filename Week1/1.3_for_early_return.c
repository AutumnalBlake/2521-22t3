/*
	Consider a function to check whether the elements in an
	array occur in ascending order.
	Duplicates are allowed in the array, as long as they are adjacent.

	Implement this function in two styles:

		1. using COMP1511 C Style
		2. using for, break/return to exit the loop early
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool isSorted(int *a, int n);

int main() {
	int sorted[] = {1, 3, 5, 7, 9};
	int unsorted[] = {7, 3, 1, 5, 9};
	int duplicates[] = {1, 3, 5, 5, 7};

	assert(isSorted(sorted, 5));
	assert(!isSorted(unsorted, 5));
	assert(isSorted(sorted, 5));
}

// 1 - COMP1511 C Style

bool isSorted(int *a, int n) {

}

// 2 - For loop version

bool isSorted(int *a, int n) {

}
