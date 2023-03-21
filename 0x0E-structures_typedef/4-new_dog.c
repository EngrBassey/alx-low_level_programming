#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - funtion to print lenght of a string
  * @str: string
  * Return: return len;
  */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	return (len);
}

/**
  * _strcpy - funtion that copy strings
  * @dest: variable to copy to
  * @str: string to copy
  * Return: return dest
  */

char *_strcpy(char *dest, char *str)
{
	int lent, i;

	lent = _strlen(str);

	for (i = 0; i < lent; i++)
	{
		dest[i] = str[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - funtion to create new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: dog owner
  * Return: return dog_Ptr
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lent1, lent2;
	dog_t *dogPtr;

	dogPtr = malloc(sizeof(dog_t));

	if (dogPtr == NULL)
	{
		return (NULL);
	}

	lent1 = _strlen(name);
	lent2 = _strlen(owner);

	dogPtr->name = malloc(sizeof(lent1 + 1));
	dogPtr->owner = malloc(sizeof(lent2 + 1));

	if (dogPtr->name == NULL || dogPtr->owner == NULL)
	{
		free(dogPtr);
		return (NULL);
	}

	_strcpy(dogPtr->name, name);
	_strcpy(dogPtr->owner, owner);

	dogPtr->age = age;

	return (dogPtr);
}
