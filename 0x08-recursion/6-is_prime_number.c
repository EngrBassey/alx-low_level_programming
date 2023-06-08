#include <stdio.h>
#include "main.h"

/**
  * is_prime_number - function to check whether a number is prime
  * @n: the number
  * Return: return a prime number
  */

int is_prime_number(int n)
{
	return (the_prime(n, 1));
}

/**
  * the_prime - funtion that gets the prime
  * @i: the index number
  * @n: the number
  * Return: return the prime number
  */

int the_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (the_prime(n, i + 1));
	}
}
