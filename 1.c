#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    unsigned int total;
    for (i=0; i < 1000; i++)
      {
        if (i % 3 == 0 || i % 5 == 0)
            total += i;
      }
    printf("Answer is: %d\n", total);



}
