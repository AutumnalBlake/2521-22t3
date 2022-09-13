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
	int i = 1;
	bool is_sorted = true;
	while (i < n) {
		if (a[i - 1] > a[i]) {
			is_sorted = false;
		}
		i++;
	}
	return is_sorted;
}

// 2 - For loop version

a = [2, 1, 3, 4, 5, 6, 7, 8, 9, ...]

bool isSorted(int *a, int n) {
	bool is_sorted = true;
	for (int i = 0; i < n; i++) {
		if (a[i - 1] > a[i]) {
			return false;
		}
	}
	return true;
}
