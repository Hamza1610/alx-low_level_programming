#include "main.h"

/*
 * swap_int - swap two pointers value
 * @a - first pointer
 * @b - second pointer variable
 * Return: nothing
*/
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
