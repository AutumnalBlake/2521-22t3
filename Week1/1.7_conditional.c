// Use a conditional expression to replace the if in the following code:

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	int ch = getchar();

	char *type;
	if (isdigit(ch)) {
		type = "digit";
	} else {
		type = "non-digit";
	}

	printf("'%c' is a %s\n", ch, type);
}