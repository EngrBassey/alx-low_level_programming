#include "main.h"

/**
 * _strpbrk - function that print occurences of string
 * @s: pointer strings
 * @accept: occurence string
 * Return: return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	s++;
	}

	return ('\0');
}
