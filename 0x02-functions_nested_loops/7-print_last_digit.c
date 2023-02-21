#include "main.h"

/**
 * print_last_digit - Entry point
 * @c: input character
 * Return: return 0 (Success)
 */

int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;
	if (c < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
