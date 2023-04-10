#include "main.h"

/**
  * flip_bits - function that returns the number of bits to be flib
  * @n: first value
  * @m: second value
  * Return: return flibcount
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long  int flibX = n ^ m;
	unsigned int flib_count = 0;

	while (flibX)
	{
		flib_count = flib_count + (flibX & 1);
		flibX >>= 1;
	}

	return (flib_count);

}
