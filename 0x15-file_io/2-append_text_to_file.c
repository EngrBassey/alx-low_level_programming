#include "main.h"

/**
  * append_text_to_file - that create a file with permission
  * @filename: the file
  * @text_content: the contents
  * Return: return 1
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr, w, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0';)
			i++;
	}

	ptr = open(filename, O_RDWR | O_APPEND);
	w = write(ptr, text_content, i);

	if (ptr == -1 || w == -1)
	{
		return (-1);
	}

	close(ptr);

	return (1);
}
