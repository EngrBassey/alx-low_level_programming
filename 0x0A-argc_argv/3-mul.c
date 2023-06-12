#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that get aguments variables and counts
  * @argv: argument variable
  * @argc: argument count
  * Return: return 0
  */

int main(int argc, char **argv)
{
	int multi, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	multi = num1 * num2;

	printf("%d\n", multi);

	return (0);
}
