#include <stdio.h>
#include <stdlib.h>
int primes[10000];
int * pindex;
int is_prime(int i)
{
    pindex = primes;
    int is_prime = 1;
    while (*pindex)
      {
        if (i % *pindex == 0)
          {
            return 0;
          }
        pindex++;
      }
    *pindex = i;
    return 1;
}
int main()
{
    unsigned int i;
    int max;
    int n;
    max = 0;
    n = 0;
    i = 2;
    while (n < 10000)
      {
        if (is_prime(i))
          {
            max = i;
            n++;
          }
        
        i++;
      }
    printf("Answer: %d\n", max);
}
