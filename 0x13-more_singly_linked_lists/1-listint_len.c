#include "lists.h"

/**
  * listint_len - function that returns the number of elements in a link lists
  * @h: Pointer to the head
  * Return: return i
  */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
	i++;
	h = h->next;
	}

	return (i);
}

