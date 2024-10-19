#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("\n\n**** C Program to Find the Sum of Individual Digits of a Given Positive Integer ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
