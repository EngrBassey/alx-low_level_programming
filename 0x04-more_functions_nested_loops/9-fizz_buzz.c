#include <stdio.h>

/**
 * main - Entry ponit
 * Return: return 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}