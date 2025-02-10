#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14;

    // Reading the radius
    scanf("%f", &radius);

    // Calculating the area
    area = PI * radius * radius;

    // Printing the area
    printf("Area: %.2f\n", area);

    return 0;
}
