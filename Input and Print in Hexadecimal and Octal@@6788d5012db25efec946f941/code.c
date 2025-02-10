#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read an integer from the user
    
    printf("Hexadecimal: %X\n", num);  // Print in hexadecimal (uppercase)
    printf("Octal: %o\n", num);        // Print in octal format
    
    return 0;
}
