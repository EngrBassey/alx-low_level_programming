#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - funtion to allocate memory to conactinate strings
  * @s1: destination string
  * @s2: source string
  * @n: the value
  * Return: return a pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, lent1, lent2, lenght;
	char *ptr;
	int num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lent2 = _strlen(s2);
	if (num >= lent2)
	{
		num = lent2;
	}
	lent1 = _strlen(s1);
	lenght = lent1 + num + 1;

	ptr = (char *)malloc(sizeof(char) * lenght);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lent1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[lenght] = '\0';
	return (ptr);
}

/**
  * _strlen - function that get string lenght
  * @str: string
  * Return: return i
  */
int _strlen(char *str)
{

	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
