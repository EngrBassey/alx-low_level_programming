#include "main.h"

/**
  * main - program that copies the content of a file to another file
  * @ac: the arguments count
  * @argv: arguments variable
  * Return: return 0
  */

int main(int ac, char **argv)
{
	int from, fil_to, r, w;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "cp file_from file_to\n");
		exit(97);
	}

	buf = _malloc(argv[2]);
	from = open(argv[1], O_RDONLY);

	r = read(from, buf, 1024);
	fil_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(fil_to, buf, r);
		if (w == -1 || fil_to == -1)
		{
			dprintf(STDERR_FILENO, "Error:     Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(from, buf, 1024);
		fil_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buf);
	_close(from);
	_close(fil_to);

	return (0);
}

/**
  * _close - function that closes the file
  * @file: the file
  */

void _close(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file);
		exit(100);
	}
}

/**
  * _malloc - function that allocates memory
  * @n: variable
  * Return: return ptr
  */

char *_malloc(char *n)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", n);
		exit(99);
	}

	return (ptr);
}
