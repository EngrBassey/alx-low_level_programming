#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * notNum - Entry point
  * @s: string
  * Return: return 1
  */

int notNum(const char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
	s++;
	}

	return (1);
}

/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Argument vector
  * Return: return 0 (Success)
  */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (notNum(argv[i]) == 0)
		{
			printf("Error\n");

			return (1);
		}

		sum += atoi(argv[i]);
	i++;
	}

	printf("%d\n", sum);

	return (0);

}
