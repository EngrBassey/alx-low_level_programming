#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - function that prints sqaure root
  * @n: the number
  * Return: return square of a number
  */

int _sqrt_recursion(int n)
{
	return (_sqauroot(n, 1));
}
/**
  * _sqauroot - function that get the sqaures
  * @i: the iteration number
  * @n: the number
  * Return: return the value
  */
int _sqauroot(int n, int i)
{
	int sqaure = i * i;

	if (n == sqaure)
	{
		return (i);
	}
	else if (sqaure > n)
	{
		return (-1);
	}
	else
	{
		return (_sqauroot(n, i + 1));
	}
}
