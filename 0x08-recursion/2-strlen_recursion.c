#include "main.h"

/**
 * _strlen_recursion - function to print lenght of a  string
 * @s: string char
 * Return: return lenght
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != '\0')
	{
		lenght++;

		return (lenght + _strlen_recursion(s + 1));
	}

	return (lenght);
}
