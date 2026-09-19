// write a program that reverses the words in a sentence
// rapf 17-sep-2026

#include <stdio.h>

int main(void)
{
    int n, i, j, m;
    char sentence[100] = {0};
    char final;

    printf("Enter a sentence: ");
    for(i = 0; i < 100; i++){
        scanf("%c", &sentence[i]);
        if ( sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            final = sentence[i];
            break;
            }
    }       
    
    printf("Reversal of sentence: ");
    for (j = i - 1; j >= 0; j--) {
        if (sentence[j] == ' ') {
            for (n = j + 1; sentence[n] != ' ' && sentence[n] != final; n++) {
                printf("%c", sentence[n]);
            }
            printf(" ");

        }
    }
    for (m = 0; sentence[m] != ' '; m++){
        printf("%c", sentence[m]);
    }
    printf("%c", final);

    return 0;   
}

    