#include <stdio.h>

int main() {
    int year;
    
    // Taking input from the user
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Checking if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }
    
    return 0;
}
