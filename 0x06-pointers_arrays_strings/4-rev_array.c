#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array
 * @n: first integer
 * Return: return 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
