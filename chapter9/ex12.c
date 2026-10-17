// calculating the inner product 
// rapf 15-oct-2026

#include <stdio.h>

#define N 5

double inner_product(double a[], double b[], int n);

int main(void)
{
    int i; 
    double a[N], b[N], dot_product;

    printf("Enter your vector a: ");
    for (i = 0; i < N; i++){
        scanf("%lf", &a[i]);
    }
    printf("Enter your vector b: ");
    for(i = 0; i < N; i++) {
        scanf("%lf", &b[i]);
    }

    dot_product = inner_product(a, b, N); 

    printf("The dot product is: %.2f", dot_product);

    return 0;
}

double inner_product(double a[], double b[], int n) {

    int i;
    double dot;

    for (i = 0; i < n; i++) {
        dot += a[i] * b[i];
    }
    
    return dot;
}