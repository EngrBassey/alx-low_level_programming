#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 * Return: return value
 * @n: first integer
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;

		_putchar('-');
	}
	if (k != 0)
	{
		print_number(k);
		_putchar((unsigned int) n % 10 + '0');
	}
}
