#include "main.h"

/**
 * factorial - function that prints n factorials
 * @n: integer value
 * Return: return n factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n  == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
