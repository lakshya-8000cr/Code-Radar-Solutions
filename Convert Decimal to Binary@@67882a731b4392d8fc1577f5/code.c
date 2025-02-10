#include <stdio.h>

void printBinary(int num) {
    int mask = 1 << 31; // Start from the highest bit
    int started = 0; // To skip leading zeros
    
    for (int i = 31; i >= 0; i--) {
        if (num & mask) {
            started = 1; // Found the first '1'
        }
        if (started) {
            printf("%d", (num & mask) ? 1 : 0);
        }
        mask >>= 1;
    }
    
    if (!started) {
        printf("0"); // If the number is 0, print '0'
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    
    printBinary(num);
    
    return 0;
}
