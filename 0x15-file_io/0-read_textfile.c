#include "main.h"

/**
  * read_textfile - function that creates files
  * @filename: the filename
  * @letters: the string size
  * Return: return wFile
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rFile, wFile, ptr;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	rFile = read(ptr, buf, letters);

	wFile = write(STDOUT_FILENO, buf, rFile);

	free(buf);
	close(ptr);

	return (wFile);
}
