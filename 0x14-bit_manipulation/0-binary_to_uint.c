#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint - function that converts binary to decimal
  * @b: the characters
  * Return: the Digits
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digits = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			digits = digits * 2;
		}
		else if (b[i] == '1')
		{
			digits = digits * 2 + 1;
		}
		else
			return (0);
	}

	return (digits);
}
