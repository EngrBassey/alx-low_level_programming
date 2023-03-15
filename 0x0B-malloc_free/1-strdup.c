#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that duplicate strings
  * @str: string
  * Return: return ptr
  *
  */

char *_strdup(char *str)
{
	int sizeLen, i;

	char *ptr;
	
	if(str == NULL)
		return (NULL);

	for (sizeLen = 0; str[sizeLen] != '\0'; sizeLen++)
		;

	ptr = (char *)malloc((sizeLen + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';

	return (ptr);
}
