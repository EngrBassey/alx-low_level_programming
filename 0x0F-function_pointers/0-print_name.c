#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - function that print name
  * @name: the name
  * @f: funtion pointer
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
