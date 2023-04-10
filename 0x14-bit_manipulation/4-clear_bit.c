#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0
  * @n: the number
  * @index: the index value
  * Return: return 1 on success
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);

}
