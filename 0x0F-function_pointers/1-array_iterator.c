#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - function that prints array elements
  * @array: array elements
  * @size: size of array
  * @action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
