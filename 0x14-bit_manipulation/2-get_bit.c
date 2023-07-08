#include "main.h"

/**
  * get_bit - function that return the value of bit in a given index
  * @n: the intial number
  * @index: the position
  * Return: return new value
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int newValue;

	if (index > 63)
	{
		return (-1);
	}

	newValue = (n >> index) & 1;

	return (newValue);
}
