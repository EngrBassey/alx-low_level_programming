#include "main.h"
#include <string.h>
/**
 * _memset - function that copies memory address
 * @s: input memory
 * @b: value
 * @n: number if bits
 * Return: return 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
