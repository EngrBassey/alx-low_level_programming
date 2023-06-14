#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - function that allocate memory to duplicate string
  * @str: the string
  * Return: return a pointer
  */
char *_strdup(char *str)
{
	static char *dup;
	char *offset;
	int length = _strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	dup = (char *)malloc((sizeof(char) * length + 1));

	if (dup == NULL)
	{
		return (NULL);
	}
	offset = dup;
	while (*str)
	{
		*offset = *str;
		offset++;
		str++;
	}
	*offset = '\0';

	return (dup);
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
