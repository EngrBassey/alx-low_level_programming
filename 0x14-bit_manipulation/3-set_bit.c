#include "main.h"

/**
  * set_bit - function that set value of a bit to 1
  * @n: the number
  * @index: index value
  * Return: return 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 68)
	{
		return (-1);
	}

	else
		*n |= (1UL << index);

	return (1);

}
