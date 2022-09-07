// What while loop is equivalent to the following for statement:

#include <stdlib.h>
#include <stdio.h>

int main() {
	int ch;
	for (ch = getchar(); ch != EOF; ch = getchar()) {
		putchar(ch);
	}
}
