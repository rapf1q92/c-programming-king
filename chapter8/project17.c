// write a program that prints an n x n magic square
// rapf 22-sep-2026

#include <stdio.h>

int main(void)
{
    int i, j, n, row, col, next_row, next_col;
    int square[99][99] = {0};

    printf("This program creates a magic square of a specified size.");
    printf("The size must be an odd number between 1 and 99.");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    col = n / 2;
    row = 0;
    square[row][col] = 1;

    for (i = 2; i <= n * n; i++) {
        next_row = row - 1; 
        next_col = col + 1; 
        if (next_row < 0) {
            next_row = n - 1;
        }
        if (next_col >= n) {
            next_col = next_col % n;
        }
        if (square[next_row][next_col] > 0) {
            next_row = row + 1;
            next_col = col;
        }
        square[next_row][next_col] = i;
        row = next_row;
        col = next_col;
        
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", square[i][j]);
            if (j >= n - 1) {
                printf("\n");
            }
        }
    }

}