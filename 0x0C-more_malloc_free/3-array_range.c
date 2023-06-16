#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - function that create an array
  * @max: maximum value
  * @min: minimum value
  * Return: return pointer to ptr
  */

int *array_range(int min, int max)
{
	int *ptr, range, i;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;

	ptr = (int *)malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
