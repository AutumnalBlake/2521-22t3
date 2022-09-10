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
	assert(0 <= n && n <= 6);
	char *day;
	if (n == 0) {
		day = "Sun";
	} else if (n == 1) {
		day = "Mon";
	} else if (n == 2) {
		day = "Tue";
	} else if (n == 3) {
		day = "Wed";
	} else if (n == 4) {
		day = "Thu";
	} else if (n == 5) {
		day = "Fri";
	} else if (n == 6) {
		day = "Sat";
	}
	return day;
}