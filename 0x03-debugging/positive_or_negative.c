#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
  Description: 'the program's description' * Return: Always 0 (Success)
*/
int main(void)
{
        /* declarations here */
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else
        {
                                     1,1           Top
