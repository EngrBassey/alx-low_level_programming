#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: first pointer
 * @src: second pointer
 * @n: integer
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
