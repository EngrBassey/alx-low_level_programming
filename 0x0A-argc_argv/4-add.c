#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - function that get aguments variables and counts
  * @argv: argument variable
  * @argc: argument count
  * Return: return 0
  */

int main(int argc, char **argv)
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (isNum(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
  * isNum - function that checks for a number
  * @str: the string
  * Return: return 0
  */

int isNum(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
	str++;
	}
	return (1);
}
