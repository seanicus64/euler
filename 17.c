#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count(char buffer[])
{
    int i;
    char ch;
    int total;
    i = 0;
    total = 0;
    while ((ch=buffer[i++]) != '\0')
      {
        if ('a' <= ch && ch <= 'z')
          {
            total += 1;
          }
            
      }
    return total;
}
int main()
{

    char ones[][20] = {"", "one", "two", "three", "four", "five", "six", \
        "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",\
        "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char tens[][20] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty",\
                    "ninety"};
    int j;
    int total;
    int th, h, t, o;
    total = 0;
    for (j=1;j<= 1000;j++)
      {
        char buffer[100] = {0};

        th = (int) j / 1000 % 10;
        h = (int) j / 100 % 10;
        t = (int) j / 10 % 10;
        if (t < 2)
          {
            t = 0;
            o = (int) j % 20;
          }
        else
            o = (int) j % 10;
        if (th)
          {
            strcat(buffer, ones[th]);
            strcat(buffer, " thousand");
          }
        if (h)
          {
            strcat(buffer, ones[h]);
            strcat(buffer, " hundred");
            if (t||o)
                strcat(buffer, " and");
          }
        if (t)
          {
            strcat(buffer, " ");
            strcat(buffer, tens[t]);
          }
        if (o)
          {
            strcat(buffer, " ");
            strcat(buffer, ones[o]);
          }
        total += count(buffer);
        // printf("%s\n", buffer);

      }
    printf("Answer: %d\n", total);

}
