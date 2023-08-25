#include <stdio.h>

int collatz(int x) {
    if (x % 2 == 0) {
        return x / 2;
    } else {
        return (x * 3) + 1;
    }
}

int main(void) {
    int x = 863323;

    if (x <= 0) {
        printf("Input must be a positive integer.\n");
        return 1;
    }

    do {
        printf("%d\n", x);
        x = collatz(x);
    } while (x != 1);

    printf("%d\n", x); // Print the final 1

    return 0;
}