#include "main.h"

/**
 * primeNum - function that checks if a number is prime
 * @a: iteration integer
 * @b: num
 * Return: return recursion function
 */

int primeNum(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
		return (primeNum(a + 1, b));
}

/**
 * is_prime_number - funtion that checks the recursion function
 * @n: number to check
 * Return: return a prime number
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (primeNum(2, n));
}
