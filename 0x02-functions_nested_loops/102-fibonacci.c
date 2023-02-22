#include <stdio.h>

/**
 * main - Entyr point
 * Return: return 0 (Success)
 *
 */

int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;

	printf("%d,%d,", a, b);
	for (i = 2; i < 50; i++)
	{
		c  = a + b;
		a = b;
		b = c;
	if (i != 49)
	{
		printf("%d,", c);
	}
	else
	{
		printf("%d\n", c);
	}
	}

	return (0);
}
