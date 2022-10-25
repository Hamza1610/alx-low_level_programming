#include "main.h"

/*
 * swap_int - swaps the value of int a and int b
 * @a - first pointer
 * @b - second pointer variable
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
