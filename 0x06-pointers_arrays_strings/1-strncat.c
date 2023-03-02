#include "main.h"

/**
 * _strncat - Entry point
 * @dest: first pointer
 * @src: second pointer
 * @n: integer value
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
