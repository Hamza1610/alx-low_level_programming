#include "main.h"

/**
 * _strlen_recursion - prints the string length
 * @s: funntion parameter
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
		m += _strlen_recursion(s + 1);
	}
	return (m);
}
