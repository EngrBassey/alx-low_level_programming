#include <stdio.h>

/**
 * main - Entyr point
 * Return: return 0 (Success)
 *
 */

int main(void)
{
	int i;
	long int a, b, c;

	a = 1;
	b = 2;

	printf("%ld, %ld, ", a, b);
	for (i = 1; i < 49; i++)
	{
		c  = a + b;
		a = b;
		b = c;
	if (i != 49)
	{
		printf("%ld, ", c);
	}
	else
	{
		printf("%ld\n", c);
	}
	}

	return (0);
}
