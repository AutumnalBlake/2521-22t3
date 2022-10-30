#include <stdbool.h>

typedef struct intSet* Set;

// Returns a new IntSet, which can contain the numbers 0 to numElems - 1
Set IntSetNew(int numElems);

// Frees an IntSet
void IntSetFree(Set s);

// Adds a number to the IntSet
// Assumes num is in the range [0, numElems - 1]
void IntSetAdd(Set s, int num);

// Checks whether a numer is in the IntSet
// Assumes num is in the range [0, numElems - 1]
bool IntSetContains(Set s, int num);

// Prints an IntSet
void IntSetPrint(Set s);