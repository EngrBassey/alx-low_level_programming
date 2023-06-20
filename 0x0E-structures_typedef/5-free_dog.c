#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - function that frees strct
  * @d: strcut variable
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(dog_t->name);
	free(dog_t->owner);
	free(d);
}
