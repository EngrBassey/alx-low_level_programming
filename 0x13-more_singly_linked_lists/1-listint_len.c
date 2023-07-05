#include "lists.h"

/**
 * listint_len - function that prints elements numbers
 * @h: the head
 * Return: return count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
	h = h->next;
	}

	return (count);
}
