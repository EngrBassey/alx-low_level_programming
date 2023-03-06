#include "main.h"

/**
 * _memcpy - function that copy string
 * @dest: pointer memory
 * @src: pointer variable
 * @n: integer value
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}
