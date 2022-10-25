#include "main.h"

/**
 * _strlen - returns length of a strings
 * @s: char pointer variable parameter
 * Return: *s
 */
int _strlen(char *s)
{
	int l;

	for (; *s++;)
	{
		l++;
	}
	return (l);
}
