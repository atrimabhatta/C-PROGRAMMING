#include <stdio.h>

int main() {
    int a, b;
    printf("\n\n**** C program to find the maximum between two numbers ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maximum: %d\n", a);
    else
        printf("Maximum: %d\n", b);

    return 0;
}
