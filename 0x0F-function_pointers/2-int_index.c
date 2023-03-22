#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - function that search for an integer
  * @array: array elements
  * @size: size of integer
  * @cmp: function pointer pointing to the comparing aurgument funtion
  * Return: return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]))
			return (i);
	}

	return (-1);
}
