#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long a, b, c;
    a = 600851475143;
    

    b = 2;
    while (a > b)
      {
        if (a % b == 0)
          {
            a = a / b;
            c = b;
          }
        else
            b++;
      }

    printf("Answer is: %llu\n", a);


}
