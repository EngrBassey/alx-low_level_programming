#include "main.h"
#include <stdlib.h>

/**
  * len - function that checks length of a string
  * @str: strings
  * Return: return 1
  */

int len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		;
	return (i);
}

/**
  * str_concat - function that concatinate string
  * @s1: first string
  * @s2: second string
  * Return: return str
  */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, size, i, j;

	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len(s1);
	len2 = len(s2);

	size = len1 + len2;

	s = (char *)malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		s[i] = s2[j];
	}

	s[i] = '\0';

	return (s);
}
