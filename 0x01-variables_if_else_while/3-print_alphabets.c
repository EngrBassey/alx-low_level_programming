#include <stdio.h>
/**
 * main - Entry
 * Return: return 0 (success)
 *
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		if (i == 'z')
		{
		for (j = 'A'; j <= 'Z'; j++)
		{
			putchar(j);
		}
		}
	}
	putchar('\n');

	return (0);
}
