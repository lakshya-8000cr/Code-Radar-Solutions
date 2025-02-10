#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    
    int bitValue = (num >> pos) & 1;
    printf("%d\n", bitValue);
    
    return 0;
}
