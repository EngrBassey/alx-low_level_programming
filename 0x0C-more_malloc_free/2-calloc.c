#include "main.h"
#include <stdlib.h>

/**
  * _memset - funtion that return 0 to the memory
  * @s: Varible
  * @b: value
  * @n: integer
  * Return: return s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
  * _calloc - function that allocate memory for array
  * @nmemb: integer value
  * @size: size of array
  * Return: return array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	_memset(array, 0, nmemb * size);

	return (array);
}
