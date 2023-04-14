#include "main.h"

/**
  * _strlen - function to get string length
  * @str: pointer pointing to the string
  * Return: return i
  */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
/**
  * create_file - function that create a file with permissions
  * @filename: file name
  * @text_content: terminationg string to write to the file
  * Return: return 1 on successs
  */
int create_file(const char *filename, char *text_content)
{

	int fdes, wrt;

	if (filename == NULL)
		return (-1);

	fdes = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdes == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		wrt = write(fdes, text_content, _strlen(text_content));

		if (wrt == -1)
			return (-1);
	}

	close(fdes);
	return (1);
}
