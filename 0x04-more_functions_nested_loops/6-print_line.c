#include "main.h"

/**
 * print_line - Entry point
 * Return: return a value of n
 * @n: first integer
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
