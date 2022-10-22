#include "main.h"

/**
 * * _isdigit - checkes for digit
 * * @c: character to check
 * c - an integer typer argument
 * Return: 0 or 1
*/
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
		return (1);
	else
		return (0);
}
