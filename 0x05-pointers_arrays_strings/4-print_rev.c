#include "main.h"
#include <string.h>
/**
 * print_rev - Entry point
 * @str: first input
 *
 */

void print_rev(char *str)
{
	int len = strlen(str);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
