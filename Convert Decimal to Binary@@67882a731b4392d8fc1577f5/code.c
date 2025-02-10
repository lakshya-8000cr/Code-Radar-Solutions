#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("0\n");
        return;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

    while (num > 0) {
        binary[index++] = num & 1; // Store the LSB
        num >>= 1; // Right shift number
    }

    // Print binary in correct order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    
    printBinary(num);
    
    return 0;
}

