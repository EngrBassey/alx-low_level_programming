#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_strings - function that print strings
  * @separator: string char
  * @n: arguments values
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;
	char *airport;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		airport = va_arg(list, char*);

		if (airport == NULL)
			printf("(nil)");
		else
			printf("%s", airport);

		if (i != (n -1) && separator !== NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(list);
}
