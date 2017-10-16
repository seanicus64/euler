#include <stdio.h>
#include <stdlib.h>
int array[200] = {1};
int count()
{
    int j;
    int sum;
    sum = 0;
    for(j=199; j>=0; j--)
        sum += array[j];
    return sum;
}
int main()
{
    int i, j;
    int carry, temp;
    carry = 0;
    for (i=1;i<=100;i++)
      {
         for(j=0; j<200; j++)
          {
            if (!array[j] && !carry)
                continue;
            temp = array[j] * i + carry;
            carry = 0;
            carry = temp / 10;
            array[j] = temp % 10;

          }
      }
    printf("Answer: %d\n", count());




}
