#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that prints opcods
  * @argc: arguments count
  * @argv: arguments variables
  * Return: return 0
  */


int main(int argc, char **argv)
{
	int byt, i;
	int (*ptr)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		code = *(unsigned char *)ptr;
		printf("%.2x", code);

		if (i == byt - 1)
			continue;
		printf(" ");

		ptr++;
	}
	printf("\n");

	return (0);
}
