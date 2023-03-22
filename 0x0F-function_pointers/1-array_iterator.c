#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - function that prints array
  * @array: array elements
  * @size: size of the array
  * @action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(action)(array[i]);
}
