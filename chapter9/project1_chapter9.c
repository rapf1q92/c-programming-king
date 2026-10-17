//A program that sorts integers by calling a function selection_sort
// rapf 16-oct-2026

#include <stdio.h>
#define N 5

void selection_sort (int a[], int n);

int main(void)
{
    int i, a[N];

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) {
        scanf(" %d", &a[i]);
    }

    selection_sort(a, N - 1);

    printf("The array of numbers after being sorted is: ");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort (int a[], int n)
{
  if (n <= 1)
    return;

    int max_index = 0, i, temp;

    for (i = 1; i < n; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }
    temp = a[n - 1];
    a[n - 1] = a[max_index];
    a[max_index] = temp;

    selection_sort(a, n - 1);
}
