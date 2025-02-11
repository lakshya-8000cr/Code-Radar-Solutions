#include <stdio.h>

int main() {
    char ch;
    
    // Taking input from the user
    printf("");
    scanf("%c", &ch);
    
    // Checking if the character is uppercase, lowercase, or not an alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else {
        printf("valid\n");
    }
    
    return 0;
}
