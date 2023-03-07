#include "main.h"

/**
 * _strspn - function that prints lenght of prefix
 * @s: srings of words
 * @accept: prefix string
 * Return: return 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
	s++;
	}

	return (length);
}
