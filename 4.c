#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_palindrome(char *, int);
int main()
{
    char buffer[50];
    int first, second, length;
    long product, answer;
    product = 0;
    answer = 0;
    int operand1, operand2;
    for (first=100; first < 1000; first++)
      {
        for (second=100; second < 1000; second++)
          {
            product = first * second;
            length = sprintf(buffer, "%d", product);
            if (check_palindrome(buffer, length) && product > answer)
              {
                operand1 = first;
                operand2 = second;
                answer = product;
              }
          }
      }
    printf("Answer: %d X %d = %lu\n", operand1, operand2, answer);






}
int check_palindrome(char * buffer, int length)
{
    int is_palindrome;
    int i;
    is_palindrome = 1;
    for (i=0; i <= ceil((float) length/2) - 1; i++)
      {
        if (buffer[i] != buffer[length-1-i])
          {
            is_palindrome = 0;
            break;
          }

      }
    return is_palindrome;
}

      

