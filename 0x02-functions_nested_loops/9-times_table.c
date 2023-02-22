#include "main.h"
/**
 * times_table - Entry point
 * Return: return void
 *
 */

void times_table(void)
{
	int i, j, mulNum, digit1, digit2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mulNum = i * j;
			digit1 = mulNum / 10;
			digit2 = mulNum % 10;
		if (j == 0)
		{
			_putchar('0');
		}
		else if (mulNum < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(digit2 + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(digit1 + '0');
			_putchar(digit2 + '0');
		}

		}
			_putchar('\n');
	}
}
