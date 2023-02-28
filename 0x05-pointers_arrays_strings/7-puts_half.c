#include"main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: first integer
 *
 */

void puts_half(char *str)
{
	int lent, x, i;

	lent = strlen(str);

	if (lent % 2 == 1)
	{
		x = lent / 2 + 1;
	}
	else
		x = lent / 2;

	for (i = x; i < lent; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
