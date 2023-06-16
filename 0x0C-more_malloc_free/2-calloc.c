#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - custom calloc
  * @nmemb: first integer
  * @size: second integer
  * Return: return ptr
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;
	unsigned int length;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;

	ptr = malloc(length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, length);
	return (ptr);
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
	unsigned i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
