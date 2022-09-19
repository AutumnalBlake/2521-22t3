/*
	Consider the following function to convert a number in the range 0..6 into a 
	weekday name. 0 returns "Sun", 1 returns "Mon", 2 returns "Tue", and so on.

	Suggest at least two alternative and more concise ways of achieving the same 
	result. Include the assert(...) in each case.

	For each function, including the one above, explain what would happen if the 
	assert(...) was removed and the function was invoked via numToDay(7).
*/

char *numToDay(int n);

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main() {
	for (int i = 0; i < 7; i++) {
		printf("%s\n", numToDay(i));
	}
}

char *numToDay(int n) {
	assert(n >= 0 && n < 7);
	char **days = {"Sun", "Mon", ...};
	return days[n];
}