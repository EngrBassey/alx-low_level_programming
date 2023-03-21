#include "dog.h"

/**
  * init_dog - function holding structure variable
  * @d: structure pointer name
  * @name: name of the dog
  * @age: age o the dog
  * @owner: dog owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

