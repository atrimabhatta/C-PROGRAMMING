#include <stdio.h>

int main() {
    int num;
    printf("\n\n**** C program to check whether a number is divisible by 5 and 11 or not within the range of 100 to 500 ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter a number between 100 and 500: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
        printf("%d is divisible by both 5 and 11.\n", num);
    else
        printf("%d is not divisible by both 5 and 11.\n", num);

    return 0;
}
