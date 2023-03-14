#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - functions that makes change for an amount
  * @argc: argument count
  * @argv: argument vector
  * Return: return 0 (Success)
  */

int main(int argc, char *argv[])
{
	int cent, coin = 0;

	int argcLen = argc - 1;

	if (argcLen != 1)
	{
		printf("Error\n");

		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
		}
		else if (cent >= 10)
		{
			cent -= 10;
		}
		else if (cent >= 5)
		{
			cent -= 5;
		}
		else if (cent >= 2)
		{
			cent -= 2;
		}
		else if (cent >= 1)
		{
			cent -= 1;
		}
	coin++;
	}
	printf("%d\n", coin);
	return (0);
}
