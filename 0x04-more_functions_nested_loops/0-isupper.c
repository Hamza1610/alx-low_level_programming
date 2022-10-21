#include "main.h"
/**
 * Create a function with name _isupper()
 * Return 1 if "c" is uppercase
 * returns 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
