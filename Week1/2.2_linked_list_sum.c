// Consider the following simple linked-list representation:

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef Node *List; // pointer to first node

// Write a function to sum the values in the list.
// Implement it first using while and then using for.

#include <stdlib.h>
#include <stdio.h>

int list_sum(List l);

int main() {
	// Set up a list:
	// 1 -> 2 -> 3 -> 4 -> X
	
	Node *a = malloc(sizeof (Node));
	Node *b = malloc(sizeof (Node));
	Node *c = malloc(sizeof (Node));
	Node *d = malloc(sizeof (Node));

	*a = (Node) {1, b};
	*b = (Node) {2, c};
	*c = (Node) {3, d};
	*d = (Node) {4, NULL};

	// Print the sum
	int sum = list_sum(a);
	printf("Sum of list is %d\n", sum);
}

// While loop version
// int list_sum(List l) {
// 	int sum = 0;
// 	List curr = l;
// 	while (curr != NULL) {
// 		sum += curr->value;
// 		curr = curr->next;
// 	}
// 	return sum;
// }

// For loop version
int list_sum(List l) {
	int sum = 0;
	for (List curr = l; curr != NULL; curr = curr->next) {
		sum += curr->value;
	}
	return sum;
}
