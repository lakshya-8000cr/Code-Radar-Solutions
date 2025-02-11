#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if it's a digit
    if (isdigit(ch)) {
        printf("Digit\n");
    } 
    // Check if it's a letter
    else if (isalpha(ch)) {
        // Convert to lowercase to simplify vowel check
        char lower_ch = tolower(ch);
        
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    // If it's neither a digit nor a letter, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
