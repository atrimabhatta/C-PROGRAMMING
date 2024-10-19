#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;
    printf("\n\n**** C program to generate the first n terms of the Fibonacci sequence ****\n");
    printf("Name: ATRIMA BHATTACHARYYA, Class MCA1B, Roll-15\n\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: %d %d", t1, t2);
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(" %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}
