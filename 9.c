#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TOTAL 1000
int main()
{
    int valid[TOTAL];
    int i;
    int * pointer;
    int * second_pointer;
    int * third_pointer;
    int * end;
    int root1, root2, root3;
    // Store all the possible squares into an array.
    for (i=TOTAL;i>0;i--)
      {
        valid[TOTAL-i] = i * i;
      }
    pointer = valid;
    end = &valid[TOTAL];
    // Look through every possible combination of squares
    while (pointer <= end)
      {
        second_pointer = pointer + 1;
        while (second_pointer <= end)
          {
            third_pointer = second_pointer + 1;
            while (third_pointer <= end)
              {
                // We found a pythagorian triple.
                if (*pointer == *second_pointer + *third_pointer)
                  {
                    root1 = sqrt(*pointer);
                    root2 = sqrt(*second_pointer);
                    root3 = sqrt(*third_pointer);
                    // We found the answer!
                    if (root1+root2+root3 == 1000)
                      {
                        printf("Answer is %d\n", root1*root2*root3);
                        return 0;
                      }
                  }
                third_pointer++;
              }
            second_pointer++;
          }

        pointer++;
      }

return 1;
}
    

