#include <stdio.h>

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking divisibility by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }
    
    return 0;
}
