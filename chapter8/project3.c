// modify repdigit.c so that the user can enter more than one number to be tested for repeated digits
// rapf 16-sep-2026

#include <stdbool.h>
#include <stdio.h>

int main(void)
{   
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    for (; n > 0 ;) {
        bool digit_seen[10] = {false};
        // int digit_rep[10] = {0};
        int digit, i;
        
       
            while (n > 0) {
                digit = n % 10;
                if (digit_seen[digit])
                    break;
                digit_seen[digit] = true;
                n /= 10;
                }

            if (n > 0)
                printf("Repeated digit\n");
            else 
                printf("No repeated digit\n");
            
        printf("Enter a number: ");
        scanf("%ld", &n);
    }
    
    printf("Program exited");
    return 0;
}


    
