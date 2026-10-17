//a function that returns the number of digits in n (a positive integer)
//rapf 09-oct-2026

#include <stdio.h>
int num_digits(int n);
int main(void)
{
    int n, digits;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    digits = num_digits(n);

    printf("Your number has %d digits", digits);

    return 0;
}

int num_digits(int n)
{
    int i = 0;

    while (n != 0) {
        n = n / 10;
        i++;
    }

    return i;
}