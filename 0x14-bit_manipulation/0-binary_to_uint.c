#include "main.h"

/**
  * binary_to_uint - funtion  that convert number to an unsigned int
  * @b: point to the string of 0 and 1 char
  * Return: return decimal
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			decimal = decimal << 1;
			decimal += b[i] - '0';
		}
		else
			return (0);
	}

	return (decimal);
}
