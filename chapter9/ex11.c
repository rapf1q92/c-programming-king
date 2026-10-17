// a function that returns your GPA
// rapf 14-oct-2026

#include <stdio.h>
#include <ctype.h>

#define N 5

float compute_GPA(char grades[], int n);

int main(void)
{
    int i;
    char grades[N];
    float average_GPA;

    printf("Introduce your grades: ");
    for(i = 0; i < N; i++)
        scanf(" %c", &grades[i]);
        
    average_GPA = compute_GPA(grades, N);
    printf("The GPA is %.2f", average_GPA);

    return 0;
}

float compute_GPA(char grades[], int n) {

    int i;
    float sum = 0;
    int valid_grades = 0;

    for(i = 0; i < n; i++) {
        if (isalpha(grades[i])) {
            char g = tolower(grades[i]);

            switch (g) {
                case 'a': sum += 4; valid_grades++; break;
                case 'b': sum += 3; valid_grades++; break;
                case 'c': sum += 2; valid_grades++; break;
                case 'd': sum += 1; valid_grades++; break;
                case 'f': sum += 0; valid_grades++; break;
                default:
                    break;
            }
        }
    }

    if (valid_grades == 0) {
        return 0.0f;
    }

    return sum / valid_grades;  

}