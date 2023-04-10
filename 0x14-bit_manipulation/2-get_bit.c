#include "main.h"

/**
  * get_bit - function that return value of a bit
  * @index: index value
  * @n: is the number
  * Return: return bit
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
	{
		return (-1);
	}
	else
		bit = (n >> index) & 1;

	return (bit);
}
