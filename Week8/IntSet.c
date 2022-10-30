#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "IntSet.h"

struct intSet {
	bool *set;
	int size;
};

Set IntSetNew(int numElems) {
	Set s = malloc(sizeof (struct intSet));
	s->set = calloc(numElems, sizeof (bool));
	s->size = numElems;	
}

void IntSetFree(Set s) {
	free(s->set);
	free(s);
}

void IntSetAdd(Set s, int num) {
	s->set[num] = true;
}

bool IntSetContains(Set s, int num) {
	return s->set[num];
}

void IntSetPrint(Set s) {
	bool first = true;
	printf("{");
	for (int i = 0; i < s->size; i++) {
		if (s->set[i]) {
			if (!first) printf(", ");
			printf("%d", i);
			first = false;
		}
	}
	printf("}\n");
}