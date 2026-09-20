// Caeser's cypher 
// rapf 19-sep-2026

#include <stdio.h>

int main(void)
{
    char message[80] = {0};
    char cypher; 
    int shift, i;

    printf("Enter a message to be encrypted: ");
    for (i = 0; i < 80; i++ ) {
        scanf("%c", &message[i]);
        if (message[i] == '\n')
            break;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for(i = 0; i < 80; i++){
        if (message[i] == '\n')
            break;
        else if((message[i] >= 'A') && (message[i] <= 'Z')) {
            cypher = ((message[i] - 'A') + shift) % 26 + 'A';
            printf("%c", cypher);
        }
        else if((message[i]) >= 'a' && (message[i] <= 'z')) {
            cypher = ((message[i] - 'a') + shift) % 26 + 'a';
            printf("%c", cypher);
        }
        else 
            printf("%c", message[i]);



    }
    return 0;
}