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
	printf("Size of a char: %lu byte(s)\n", ch);
	printf("Size of a int: %lu byte(s)\n", i);
	printf("Size of a long int: %ld byte(s)\n", li);
	printf("Size of a long long int: %lu byte(s)\n", lli);
	printf("Size of a float: %lu byte(s)\n", f);
	return (0);
}
