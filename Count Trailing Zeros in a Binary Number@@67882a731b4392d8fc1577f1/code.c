#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    
    while ((num & 1) == 0 && num != 0) {
        num >>= 1;
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}
