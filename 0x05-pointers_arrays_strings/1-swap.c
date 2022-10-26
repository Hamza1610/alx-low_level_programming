#include "main.h"

/**
 * swap_int - swaps integer variable
 * @a: first memeber
 * @b: second memeber
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
