#include "main.h"
/**
 * _puts_recursion - prints strings with a new line
 *
 * @s: strings to be printed
 *
 * Return - nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
