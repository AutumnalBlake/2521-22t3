// Use a conditional expression to replace the if in the following code:

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	int ch = getchar();

	char *type;
	// if (isdigit(ch)) {
	// 	type = "digit";
	// } else {
	// 	type = "non-digit";
	// }

	type = isdigit(ch) ? "digit" : "non-digit";

	printf("'%c' is a %s\n", ch, type);

}

int max(int a, int b) {
	// if (a > b) {
	// 	return a;
	// } else {
	// 	return b;
	// }

	return a > b : a : b;	
}