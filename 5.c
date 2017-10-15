#include <stdio.h>
#include <stdlib.h>

int * get_prime_factorization(int number)
{
    
    int * primes = malloc(20 * sizeof(int));
    int * original = primes;
    int i;
    i = 2;
    while (number >= i)
      {
        if (number % i == 0)
          {
            number /= i;
            *primes = i;
            primes++;
          }
        else
            i++;
      }
    *primes = '\0';
    return original;
}

int main()
{
    int * pointers[20]; // make an array of 20 pointers, 1-20.
    int * * p_pointers; // pointer to pointer array;
    int * * original; // copy of p_pointers
    int * primes;   // pointer for a prime factorization array
    p_pointers = pointers;
    original = pointers;

    // put the prime factorization of each number 1-20 into an array
    int i;
    for (i=1; i <= 20; i++)
      {
        primes = get_prime_factorization(i);
        *p_pointers = primes;
        p_pointers++;
        
      }

    int prime_candidate;
    int max[20] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int current_prime;
    int current_product;
    p_pointers = original;
    for(i = 0; i<20; i++)
      {
        primes = *p_pointers;
        current_prime = 1;
        current_product = 1;
        while(*primes)
          {
            if (*primes != current_prime)
              {
                if (current_product > max[current_prime])
                    max[current_prime] = current_product;
                current_product = 1;
                current_prime = *primes;
              }
            current_product *= current_prime;
             

            primes++;
          }
        if (current_product > max[current_prime])
            max[current_prime] = current_product;
            

        p_pointers++;
      }
    int answer;
    answer = 1;
    for (i=1;i<20;i++)
      {
        answer *= max[i];
      }
    printf("Answer: %d\n", answer);
    return 0;

}
