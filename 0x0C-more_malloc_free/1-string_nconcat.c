#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - function that concatinate string with malloc memory
  * @s1: first string
  * @s2: second string
  * @n: integer value
  * Return: return s
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lent1 = 0, lent2 = 0, i = 0, j = 0;

	char *s;

	while (s1 && s1[lent1])
		lent1++;
	while (s2 && s2[lent2])
		lent2++;

	if (n < lent2)
	{
		s = malloc((lent1 + n + 1) * sizeof(char));
	}

	else
		s = malloc((lent1 + lent2 + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < lent1)
	{
		s[i] = s1[i];

	i++;
	}

	while (n < lent2 && i < (lent1 + n))
		s[i++] = s2[j++];

	while (n >= lent2 && i < (lent1 + lent2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
