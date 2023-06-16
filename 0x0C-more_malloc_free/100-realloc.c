#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - memory function
  * @ptr: old memory
  * @old_size: old size
  * @new_size: new size
  * Return: pointer to ptr
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return (NULL);
		}
	}
	if (new_size > old_size && (ptr != NULL))
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (newptr);
		for (i = 0; i < old_size; i++)
		{
			_memset(newptr, i, old_size);
		}
		free(ptr);
	}
	return (newptr);
}
/**
  * _memset - memset function
  * @s: destination
  * @b: source
  * @n: times to copy
  * Return: return pointer memory
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
