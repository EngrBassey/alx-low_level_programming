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
	int i;
	int lentOfDest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lentOfDest++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		dest[lentOfDest + i] = src[i];
	}

	return (dest);
}
