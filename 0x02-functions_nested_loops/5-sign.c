#include "main.h"

/**
 * print_sign - Entry point
 * Return: return 0 (Success)
 * @n: input character
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
