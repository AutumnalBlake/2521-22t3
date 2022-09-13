#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("%s\n", argv[1]);
}

char *e = malloc(10 * sizeof (char));
e[0] = 'A';
*e = 'A';