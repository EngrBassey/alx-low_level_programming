#include "main.h"

/**
 * _abs - Entry point
 * @c: input character
 * Return: return 0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
		return (c);
}
