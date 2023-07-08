#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: the integer
  * @index: the position
  * Return: return value
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index > 63)
		return (-1);
	*n = *n & mask;

	return (1);
}
