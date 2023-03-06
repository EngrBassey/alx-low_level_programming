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
	memset(s, b, n);

	return (0);
}
