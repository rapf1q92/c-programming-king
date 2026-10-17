//a function that returns the day of the year (an integer between 1 and 366) specified by three arguments
// 02-oct-2026

#include <stdio.h>
int day_of_year(int month, int day, int year); 
int main(void)
{
    int month, day, year, sum_days;
    printf("Introduce the day in numerical format(month/day/year): ");
    scanf("%d / %d / %d", &month, &day, &year);

    sum_days = day_of_year(month, day, year);

    printf("Today is the day %d of the year", sum_days);
}

int day_of_year(int month, int day, int year) 
{
    int i, j, sum_days = 0;
    int month_day[12][31];
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 == 0) {
        days_in_month[1] = 29;
    }

    for (i = 0; i < month - 1; i++) {
        sum_days += days_in_month[i];
    }

    sum_days += day;

    return sum_days;

}