#include "lists.h"

/**
  * list_len - prints number of elements in a link node
  * @h: pointer node
  * Return: return (i)
  */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
