#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - function holding structure variable
  * @d: structure pointer name
  * @name: name of the dog
  * @age: age o the dog
  * @owner: dog owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

