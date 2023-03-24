#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_numbers - function that prints numbers
  * @separator: string
  * @n: number of values
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

}
