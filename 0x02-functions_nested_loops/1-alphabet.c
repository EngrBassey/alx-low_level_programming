#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: return 0 (Success)
 *
 */

void print_alphabet()
{
	char myStr;

	for (myStr = 'a'; myStr <= 'z'; myStr++)
	{
		_putchar(myStr);
	}
	_putchar('\n');
}
