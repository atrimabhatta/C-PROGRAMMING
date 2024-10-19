#include <stdio.h>

int sumOfDigits(int num);

int main() {
    int num;

    printf("\n\n**** C Program to Find the Sum of the Digits of a Number Using Recursion ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Sum of digits: %d\n", sumOfDigits(num));

    return 0;
}

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumOfDigits(num / 10);
}
