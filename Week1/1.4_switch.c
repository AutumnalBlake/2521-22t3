// Describe the difference in behaviour (and in the final result)
// of the following two switch statements:

#include <stdlib.h>
#include <stdio.h>

int main() {
	int ch = getchar();

	// S1
	switch (ch) {
		case 'a': printf("eh? "); break;
		case 'e': printf("eee "); break;
		case 'i': printf("eye "); break;
		case 'o': printf("ohh "); break;
		case 'u': printf("you "); break;
	}
	printf("\n");

	// S2
	switch (ch) {
		case 'a': printf("eh? ");
		case 'e': printf("eee ");
		case 'i': printf("eye ");
		case 'o': printf("ohh ");
		case 'u': printf("you ");
	}
	printf("\n");
}