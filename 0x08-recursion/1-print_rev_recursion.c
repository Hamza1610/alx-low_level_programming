#include "main.h"

/**
 * _print_rev_recursion - function print string reverse
 *
 * @s: function parameter
 * Return - nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
