#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // Define a mask with the MSB set for a 32-bit integer
    int mask = 1 << 31;

    if (num & mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
