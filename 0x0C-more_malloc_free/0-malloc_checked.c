#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function allocate malloc memory
  * @b: varible to allocate memory to
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
