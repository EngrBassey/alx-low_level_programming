#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: return 0 (Success)
  */

int main(int argc, char *argv[])
{
	int argvLen = argc - 1;

	if (argvLen != 2)
	{
		printf("Error\n");

		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
