#include "main.h"
/**
 * _isupper -  checks if c is an upercase
 * Return 1 if "c" is uppercase
 * returns 0 otherwise
 * c - is an int variable passed into the function _isupper()
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
