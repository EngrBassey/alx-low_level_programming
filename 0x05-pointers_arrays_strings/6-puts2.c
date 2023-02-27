#include "main.h"
#include <string.h>

/**
 * puts2 - Entry point
 * @str: first input
 *
 */

void puts2(char *str)
{
	int lent, i;

	lent = strlen(str);

	for (i = 0; i < lent; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
