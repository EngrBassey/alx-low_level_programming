#include "lists.h"

/**
  * print_listint_safe - function that prints a listint_t linked list.
  * @head: first node
  * Return: return i
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *Nodes;

	size_t i = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
	i++;

	Nodes = head;
	head = head->next;

		if (Nodes <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (i);
}
