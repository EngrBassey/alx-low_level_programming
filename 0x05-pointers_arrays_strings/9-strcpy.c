#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: first pointer
 * @src: second pointer
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; x < i; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
