#include <stdio.h>

int main() {
    int a, b, c;

    // Prompting for clarity
    printf("");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;  // Exit if input is invalid
    }

    int max;

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    printf("%d\n", max);
    return 0;
}
