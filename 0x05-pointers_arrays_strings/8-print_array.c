#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array variable
 * @n: lopping integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 4)
		{
			printf("%d\n ", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
}
