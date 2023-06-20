#include "dog.h"
#include <stdio.h>

/**
  * init_dog - struct function
  * @d: struct variable
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: return 0
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
