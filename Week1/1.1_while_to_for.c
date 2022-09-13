// Convert the following while loop to a for loop:

#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 10; // Initialise
	while (i >= 0) { // Where to stop
		printf("%d\n", i);
		i--; // Iterate
	}

	for (int i = 10; i >= 0; i--) {
		printf("%d\n", i);
	}
}
