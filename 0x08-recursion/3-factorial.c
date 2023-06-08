#include <stdio.h>
#include "main.h"

/**
  * factorial - function that prints factorial of a number
  * @n: the number
  * Return: return the factorial value
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
