// a program that prints a table showing how many times each digit appears in the number
// rapf 16-sep-2026

#include <stdio.h>

int main(void)
{
    int digit_occurrence[10] = {0};
    int digit, j, i; 
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_occurrence[digit]++;
        n /= 10;
    }

    printf("Digit:     ");
    for (j = 0; j < 10; j++) {
        printf("%4d", j);
    }
    
    printf("\n");
    printf("Occurrences:");
    for (i = 0; i < 10; i++) {
        printf("%4d", digit_occurrence[i]);
    }


    return 0;
}