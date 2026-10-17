// code snippet

#include <stdio.h>

int main(void)
{
    int x, n, result;
    result = 1;

    printf("Introduce the base x: ");
    scanf("%d", &x);
    printf("Introduce the power n: ");
    scanf("%d", &n);

    while(n-- > 0) {
        result = result * x; 
    }
    printf("%d to the %d power is: %d", x, n, result);

    return 0;
}