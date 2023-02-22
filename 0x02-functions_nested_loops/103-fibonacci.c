#include <stdio.h>

/**
 * main -Entry point
 * Return: return 0 (Success)
 */

int main(void)
{
	long int a1, b1, c1, adds;

	a1 = 1;
	b1 = 1;
	c1 = 0;
	adds = 0;

	while (c1 <= 4000000)
	{
		c1 = a1 + b1;
		a1 = b1;
		b1 = c1;

	if ((a1 % 2) == 0)
	{
		adds = adds + a1;
	}
	}
	printf("%ld\n", adds);

	return (0);
}
