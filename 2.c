#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned first, second, temp;
    unsigned sum;
    first = 1;
    second = 2;
    temp = 0;
    sum = 0;
    while (temp < 4000000)
      {
        if (second % 2 == 0)
            sum += second;
        temp = first + second;
        first = second;
        second = temp;
      }
    printf("Answer is: %lu\n", sum);







}
