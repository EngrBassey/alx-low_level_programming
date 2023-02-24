#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: retun 0 (Success)
 *
 */

int main(void)
{
	long x, prime;
	long num = 612852475143;
	double square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if ((num % x) == 0)
		{
			prime = num / x;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
