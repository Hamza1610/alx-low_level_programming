#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0
*/
int main(void)
{
	char low_alpha[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(low_alpha[i]);
	}

	putchar('\n');
	return (0);
}

