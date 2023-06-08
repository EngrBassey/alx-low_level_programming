#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - function that retuns the power of two numbers
  * @x: the integer
  * @y: the power
  * Return: return the power values
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
