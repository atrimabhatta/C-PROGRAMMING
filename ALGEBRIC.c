#include <stdio.h>

int main() {
    float a, x, b, result;
    printf("\n\n**** C program to evaluate the algebraic expression (ax+b)/(ax-b) ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter values for a, x, and b: ");
    scanf("%f %f %f", &a, &x, &b);

    if ((a * x - b) != 0) {
        result = (a * x + b) / (a * x - b);
        printf("Result: %.2f\n", result);
    } else {
        printf("Division by zero error!\n");
    }

    return 0;
}
