#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - function that prints array
  * @width: array column
  * @height: array height
  * Return: str
  */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **str;

	str = (int **)malloc(height * sizeof(int *));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		str[i] = (int *)malloc(width * sizeof(int));

		if (str[i] == NULL)
		{
			for (; i >= 0; i++)
				free(str[i]);
			free(str);

			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			str[i][j] = 0;

	return (str);
}

