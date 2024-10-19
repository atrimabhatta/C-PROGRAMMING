#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;
    printf("\n\n**** C program to check whether a given number is an Armstrong number or not ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
