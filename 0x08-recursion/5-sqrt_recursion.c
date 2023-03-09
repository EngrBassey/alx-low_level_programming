#include "main.h"

/**
 * square1 - funtion that prints sqaure root of num
 * @a: iteration integer
 * @b: num
 * Return: return 1
 */

int square1(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}

	return (square1(a + 1, b));
}

/**
  * _sqrt_recursion - funtion that returns the square root of n
  * @n: num value
  * Return: return 1
  */
int _sqrt_recursion(int n)
{
	return (square1(1, n));
}

