#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  *main - Entry point
 *  *
 *  *Return: Always 0 (Success)
 *
 *  * *1. The last digit
 *  *
 */
int main(void)
{
  int n,lg;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  lg=n%10;
  /* your code goes there */
  if (lg==0)
    printf("Last digit of %d is %d and is %d\n",n,lg,0);
  else if(lg>5)
    printf("Last digit of %d is %d and is greater than %d\n",n,lg,5);
  else
    printf("Last digit of %d is %d and is less than %d and not %d\n",n,lg,6,0);
  return (0);
}
