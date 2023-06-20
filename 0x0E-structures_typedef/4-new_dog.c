#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - function that create new struct
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: return ptr
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int lent1, lent2;

	lent1 = _strlen(name) + 1;
	lent2 = _strlen(owner) + 1;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * lent1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * lent2);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->name, owner);

	return (ptr);
}

/**
 * _strcpy - Entry point
 * @dest: first pointer
 * @src: second pointer
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';

	return (dest);
}

/**
  * _strlen - funtion that return string lenght
  * @str: the string
  * Return: return i
  */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
