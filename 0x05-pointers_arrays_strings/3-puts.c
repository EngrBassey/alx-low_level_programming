#include "main.h"

/**
 * _puts - Entry point
 * @str: first input
 *
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
