#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - function that creates 2D array using malloc
  * @width: the row
  * @height: the columns
  * Return: return a pointer
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);

}