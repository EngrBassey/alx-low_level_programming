#include "lists.h"

/**
 * print_listint - function that all elements of a list
 * @h: list pointer
 * Return: return i
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);

	i++;
	h = h->next;
	}

	return (i);
}
