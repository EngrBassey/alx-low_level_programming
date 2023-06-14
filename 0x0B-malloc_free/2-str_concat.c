#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - funtion that concat strings with malloc
  * @s1: destination string
  * @s2: source string
  * Return: return a pointer
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int lent1, lent2, lent;

	lent1 = _strlen(s1);
	lent2 = _strlen(s2);

	lent = lent1 + lent2;
	ptr = (char *)malloc(sizeof(char) * (lent + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lent1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < lent2; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[lent] = '\0';
	return (ptr);
}

/**
  * _strlen - function that get string length
  * @str: string
  * Return: return i
  */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
