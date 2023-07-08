#include "main.h"

/**
  * get_endianness - function that prints endianness
  * Return: return (c)
  */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return (*c);
}
