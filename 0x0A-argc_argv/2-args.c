#include <stdio.h>

/**
  * main - function that get aguments variables and counts
  * @argv: argument variable
  * @argc: argument count
  * Return: return 0
  */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
