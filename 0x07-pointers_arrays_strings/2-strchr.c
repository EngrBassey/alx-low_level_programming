#include "main.h"

/**
 * _strchr - function that return a strinf occurrence
 * @s: pointer
 * @c: string
 * Return: return 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	return (0);
}
