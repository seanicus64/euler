#include <stdio.h>
#include <stdlib.h>
int array[1000000] = {0};
int length(long n)
{
    int count;
    count = 0;
    while (n > 1)
      {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        count++;
      }
    return count;

}
int main()
{
    long i;
    int count;
    int max;
    int answer;
    answer = 1;
    max = 0;
    i = 1;
    for (i=1;i<1000000;i++)
      {
        count = length(i);
        if (count > max)
          {
            max = count;
            answer = i;
          }
        ;
      }
    printf("Answer is %d\n", answer);








}
