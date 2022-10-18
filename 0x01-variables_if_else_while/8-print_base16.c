#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0
*/
int main(void)
{
	char base[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(base[i]);
	}

	putchar('\n');
	return (0);
}

