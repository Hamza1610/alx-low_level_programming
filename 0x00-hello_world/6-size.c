#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	/* variable declaration */
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	/* statements **/
	printf("Size of a char: %c byte(s)\n", ch);
	printf("Size of a int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of a long long int: %d byte(s)\n", lli);
	printf("Size of a float: %f byte(s)\n", f);
	return (0);
}
