#include <stdio.h>
#include <stdlib.h>

int main()
{
    char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, num_sundays;
    int j;
    int day_of_week = 1;
    int leap;
    int tomorrow_day_of_week;
    num_sundays = 0;
    year = 1901;
    while (year < 2001)
      {
        for (j=0; j<12; j++)
          {
            // The last date was the last date of the last month.
            tomorrow_day_of_week = ((day_of_week + 1) % 7);
            if (!tomorrow_day_of_week) num_sundays++;
            leap = 0;
            if (j == 1 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
                leap = 1;
            day_of_week = (array[j]+ leap + day_of_week) % 7;
          }
        year++;

      }
    printf("Answer: %d\n", num_sundays);
    
}

