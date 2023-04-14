#include "main.h"

/**
  * _strlen - function to get string lenght
  * @s: the string
  * Return: return i
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
  * append_text_to_file - function that append test to file
  * @filename: the file name
  * @text_content: terminating string
  * Return: return 1 on succes
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fwrt, wrt;

	if (filename == NULL)
	{
		return (-1);
	}

	fwrt = open(filename, O_WRONLY | O_APPEND);
	if (fwrt == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		wrt = write(fwrt, text_content, _strlen(text_content));
		if (wrt == -1)
			return (-1);
	}

	close(fwrt);

	return (1);
}
