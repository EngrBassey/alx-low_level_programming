#include "main.h"

/**
  * print_list - prints length of a string
  * @h: pointer node
  * Return: return i
  */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	i++;
	h = h->next;
	}

	return (i);
}
