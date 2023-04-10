#include "main.h"

/**
  * get_endianness - function that checks the endianness
  * Return: return i
  */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
