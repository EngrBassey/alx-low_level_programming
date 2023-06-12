#include <stdio.h>

/**
  * main - function that get aguments variables and counts
  * @argv: argument variable
  * @argc: argument count
  * Return: return 0
  */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
