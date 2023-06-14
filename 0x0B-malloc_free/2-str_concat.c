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
	int lent1 = 0, lent2 = 0, lent;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			lent1++;
			i++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			lent2++;
			i++;
		}
	}
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
