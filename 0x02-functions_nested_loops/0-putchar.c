#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: return 0 (Success)
 *
 */

int main(void)
{
	char myStr[] = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(myStr[i]);
	}
	return (0);
}

