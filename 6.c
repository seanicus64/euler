#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int sum_of_squares;
    int sum;
    int square_of_sum;
    int answer;
    sum = 0;
    sum_of_squares = 0;
    for(i=1;i<=100;i++)
      {
        sum += i;
        sum_of_squares += i * i;
      }
    square_of_sum = sum * sum;
    answer = square_of_sum - sum_of_squares;
    printf("Answer: %d\n", answer);
}
        
