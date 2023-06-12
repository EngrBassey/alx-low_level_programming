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
	int change = 0, j, cent;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	for (j = 0; j < 5; j++)
	{

		while (cent >= coin[j])
		{
			cent -= coin[j];
			change++;
		}
	}

	printf("%d\n", change);

	return (0);

}
