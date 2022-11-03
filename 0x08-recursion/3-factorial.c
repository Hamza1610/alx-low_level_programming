#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: function parameter
 * Return: int
 */
int factorial(int n)
{
	int t;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		t = n * factorial(n - 1);
	}
	return (t);
}
