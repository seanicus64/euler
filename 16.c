#include <stdio.h>
#include <stdlib.h>
int array[400] = {0};
int sum_array()
{
    int total;
    int i;
    total = 0;
    for (i=400; i>= 0; i--)
        total += array[i];
    return total;
}
int main()
{
    int i, j, carry;
    carry = 0;
    array[0] = 1;
    i = 1;
    for (i=1; i <= 1000; i++)
      {
        carry = 0;
        for (j=0;j<400;j++)
          {
            array[j] *= 2;
            array[j] += carry;
            carry = 0;
            if (array[j] > 9)
              {
                carry = array[j] / 10;
                array[j] %= 10;
              }
          }


      }
    printf("Answer is %d\n", sum_array());








}
