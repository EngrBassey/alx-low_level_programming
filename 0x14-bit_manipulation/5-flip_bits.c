#include "main.h"

/**
  * flip_bits - function that returns the number of bits you would need toflip
  * @n: first integer
  * @m: second integer
  * Return: return value
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exc = n ^ m;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = exc >> i;
		if (value & 1)
		{
			count++;
		}
	}
	return (count);
}
