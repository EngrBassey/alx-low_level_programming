#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function that creates array of chars with malloc
  * @size: size of char
  * @c: character
  * Return: returned a pointer array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
