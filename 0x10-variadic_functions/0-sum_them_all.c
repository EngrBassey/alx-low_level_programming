#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - function that sum up parameters
  * @n: number of arguments
  * Return: return results
  */

int sum_them_all(const unsigned int n, ...)
{
	int results = 0;
	unsigned int i;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		results += va_arg(sum, int);
	}

	return (results);
}
