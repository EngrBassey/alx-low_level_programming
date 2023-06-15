#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that creates memory
  * @b: the value
  * Return: return a memory pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
