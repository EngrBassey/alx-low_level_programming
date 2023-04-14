#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
  * read_textfile - function that reads binary file
  * @filename: the file name
  * @letters: the number to print
  * Return: return writef
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readf, writef;
	int fptr;
	char *memry;

	if (filename == NULL)
	{
		return (0);
	}

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);

	memry = malloc(sizeof(char) * letters);
	if (memry == NULL)
	{
		return (0);
	}

	readf = read(fptr, memry, letters);
	writef = write(STDOUT_FILENO, memry, readf);
	close(fptr);
	free(memry);

	return (writef);
}
