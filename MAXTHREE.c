#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("\n\n**** C program to find the maximum between three numbers ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum: %d\n", num2);
    } else {
        printf("Maximum: %d\n", num3);
    }

    return 0;
}

