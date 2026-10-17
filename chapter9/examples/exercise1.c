// exercise 2 
// 01-oct-2026

#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
    int x, y, n, value;

    printf("Enter a number n, x and y: ");
    scanf("%d%d%d", &n, &x, &y);

    value = check(x, y, n);
    printf("%d", value);

}
 int check(int x, int y, int n)
    {
        if ((x < n && x >= 0) && (y < n && y >= 0)) 
            return 1;
        
        else return 0;
    }