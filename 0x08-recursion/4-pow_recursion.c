#include "main.h"

/**
 * _pow_recursion - function that print pow of a num
 * @x: num
 * @y: pow num
 * Return: return 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
