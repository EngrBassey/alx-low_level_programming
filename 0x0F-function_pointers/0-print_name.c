#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - function that print name
  * @name: the name
  * @f: funtion pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
