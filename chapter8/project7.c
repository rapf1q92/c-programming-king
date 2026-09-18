// a program that reads a 5 x 5 array of integers and then prints 
// the row sums and the column sums
// rapf 17-sep-2026

#include <stdio.h>

int main(void) 
{
    int matrix[5][5] ={0};
    int i, j, r_sum = 0, c_sum = 0;

    for (i = 0; i < 5; i++){
        printf("Enter row %d :", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    printf("Row totals: ");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
        r_sum += matrix[i][j];
        }
        printf("%d  ", r_sum);
        r_sum = 0; 
    }
    printf("\n");

    printf("Column totals: ");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            c_sum += matrix[j][i];
        }
        printf("%d  ", c_sum);
        c_sum = 0;
    }

    return 0;
}