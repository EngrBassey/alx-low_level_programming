#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
  * print_numbers - function that prints numbers
  * @separator: string seperator
  * @n: the number of values
  * Return: return the numbers
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && s != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
