#include "main.h"

/**
 * _isdigit - Entry point
 * Return: return a value
 * @c: first input
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
