#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 (success)
 *
 */

int main(void)
{
	char j;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
