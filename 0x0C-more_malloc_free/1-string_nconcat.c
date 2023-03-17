#include "main.h"
#include <stdlib.h>

/**
  * len - functiont that prints length  of a string
  * @str: string
  * Return: return i
  */

int len(char *str) /**lenght of the string function*/
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
  * string_nconcat - function that concatinate string with malloc memory
  * @s1: first string
  * @s2: second string
  * @n: integer value
  * Return: return s
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lent1, lent2, i = 0, j = 0;

	char *s;

	lent1 = len(s1);
	lent2 = len(s2);

	if (n < lent2)
	{
		s = malloc((lent1 + n + 1) * sizeof(char));
	}

	else
		s = malloc((lent2 + lent1 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (; i < lent1; i++)
	{
		s[i] = s1[i];
	}

	while (n < lent2 && i < (lent1 + n))
		s[i++] = s2[j++];

	while (n >= lent2 && i < (lent1 + lent2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
