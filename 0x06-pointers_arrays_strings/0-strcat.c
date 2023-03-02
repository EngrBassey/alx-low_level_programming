#include "main.h"

/**
 * _strcat - Entry point
 * @dest: first pointer
 * @src: second pointer
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lentOfDest = 0;
	int lentOfSrc = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lentOfDest++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		lentOfSrc++;
	}
	for (i = 0; i <= lentOfSrc; i++)
	{
		dest[lentOfDest + i] = src[i];
	}

	return (dest);
}
