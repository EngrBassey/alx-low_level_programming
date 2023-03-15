#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that prints array
  * @size: size of integer value
  * @c: char
  * Return: return array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (!array)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
