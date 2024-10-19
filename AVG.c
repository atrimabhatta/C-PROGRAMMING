#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    float average;
    printf("\n\n**** C Program to Find the Sum and Average of Three Numbers ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
