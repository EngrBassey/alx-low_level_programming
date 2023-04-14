#include "main.h"

/**
  * buf - function that create memory
  * @file: pointer pointing to the file
  * Return: return i
  */
char *buf(char *file)
{
	char *buf_size;

	buf_size = malloc(sizeof(char) * 1024);

	if (buf_size == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf_size);
}

/**
  * to_close - function that close file
  * @fun_close: parameter to close
  */

void to_close(int fun_close)
{
	int cls;

	cls = close(fun_close);

	if (cls == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", cls);
	exit(100);
	}

}

/**
  * main - program that copies the content of a file to another file.
  * @argc: argument count
  * @argv: argument variable
  * Return: return 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	int wrt_byt, rwt_byt;
	char *buffer = buf(argv[2]);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	rwt_byt = read(file_from, buffer, 1024);
	if ((rwt_byt == -1) | (file_from == -1))
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}


	while (rwt_byt > 0)
	{
		wrt_byt = write(file_to, buffer, rwt_byt);
		if ((file_to == -1) | (wrt_byt == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		}

		rwt_byt = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	}

	to_close(file_from);
	to_close(file_to);

	return (0);
}
