#include <stdio.h>

int main() {
    int num1, num2;

    // Reading two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Comparing the numbers using '>' operator
    if (num1 > num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
