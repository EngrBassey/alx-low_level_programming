#include "lists.h"

/**
  * list_len - function that returns the number of elements in a linked list_t
  * @h: the lisut
  * Return: return count
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
