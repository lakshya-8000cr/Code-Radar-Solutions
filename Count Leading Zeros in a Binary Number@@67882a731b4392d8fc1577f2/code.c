#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i))
            break;
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}
