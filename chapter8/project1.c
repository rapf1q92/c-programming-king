// a program that shows which digits (if any) were repetead
// rapf 15-sep-2026

#include <stdbool.h>
#include <stdio.h>

int main(void) 
{
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    bool repeated = false;
    int digit;
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]){
            digit_repeated[digit] = true;
            repeated = true;
        }
        else
            digit_seen[digit] = true;
        n /= 10;
    }    
   
  
    if (repeated) {
        printf("Repeated digits: ");
        for (digit = 0; digit < 10; digit++) {
            if (digit_repeated[digit]) {
                printf("%d ", digit);
            } 
    }}
    else printf("No repeated digit(s)");
    

    printf("\n");
return 0;
}