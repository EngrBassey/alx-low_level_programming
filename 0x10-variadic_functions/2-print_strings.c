#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
  * print_strings - function that prints string
  * @separator: string seperator
  * @n: the number of values
  * Return: return the numbers
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(num, char *);
		if (ptr == NULL)
			printf("(nil)");
		printf("%s", ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
