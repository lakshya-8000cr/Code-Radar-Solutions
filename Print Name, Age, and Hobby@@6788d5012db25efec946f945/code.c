#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];

    // Reading input
    scanf("%s %d %s", name, &age, hobby);

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
