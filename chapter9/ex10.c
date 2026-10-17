// functions that return different values
// 10-oct-2026

#include <stdio.h>
#define N 10

int largest_element(int a[], int n);
double average(int a[], int n);
int positive_elements(int a[], int n);

int main(void)
{
    int a[N], large, positive, i; 
    double aver;

    printf("Enter %d numbers in any order: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    large = largest_element(a, N);
    aver = average(a, N);
    positive = positive_elements(a, N);

    printf("The largest element is: %d\n", large);
    printf("The average of the numbers is: %.2f\n", aver);
    printf("The number of positive elements in the array is: %d\n", positive);

    return 0;
}

int largest_element(int a[], int n)
{
    int i, large;
    
    large = a[0];
    for(i = 0; i < n - 1; i++) {
        if (a[i + 1] > large)
            large = a[i + 1];
        
    }

    return large;

}

double average(int a[], int n)
{
    int i; 
    double ave;
    ave = 0;

    for(i = 0; i < n; i++) {
        ave += a[i];
    }
    ave /= n;
    
    return ave; 
}

int positive_elements(int a[], int n) 
{
    int i, pos = 0;

    for(i = 0; i < n; i++) {
        if (a[i] > 0)
        pos++;
    }

    return pos;
}