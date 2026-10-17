// a function that returns the kth digit in n 
// rapf 10-oct-2026

#include <stdio.h>

int digit(int n, int k);
int main(void)
{
    int n, k, k_th;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the kth digit you want to check: ");
    scanf("%d", &k);

    k_th = digit(n, k);

    printf("The %d digit is: %d", k, k_th);

    return 0;
}

int digit(int n, int k)
{
    while (k > 1) {
        n /= 10;
        k--;
    }

    return n % 10;
}