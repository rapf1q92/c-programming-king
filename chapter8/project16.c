// a program that tests if two words are anagrams
// rapf 20-sep-2026

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, i;
    int letters[26]={0};

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)){
            ch = tolower(ch);
            letters[ch - 'a']++;
        }
    }
    printf("Enter second word: ");
    while((ch = getchar()) != '\n'){
        if(isalpha(ch)){
            ch = tolower(ch);
            letters[ch - 'a']--;
        }
    }

    for (i = 0; i < 26; i++){
        if (letters[i]) {
            printf("The words are not anagrams.");
            break; 
        }
    }
    if (i == 26)
        printf("The words are anagrams.");
    return 0;
}