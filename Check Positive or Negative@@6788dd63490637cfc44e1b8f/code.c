#include <stdio.h>

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Checking if the number is positive, negative, or zero
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    
    return 0;
}
