#include "function_pointers.h"

/**
  * print_name - funtion that print name
  * @name: name string
  * @f: function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
