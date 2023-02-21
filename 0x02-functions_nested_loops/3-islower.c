#include "main.h"

/**
 * _islower - Entyr point
 * Return: return 0 (Succedd)
 * @c: input integer
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

