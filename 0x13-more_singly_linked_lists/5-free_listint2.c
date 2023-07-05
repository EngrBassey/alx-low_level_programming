#include "lists.h"

/**
  * free_listint2 - function that frees lists
  * @head: the pointer to a node
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		*head = tmp;
		tmp = (*head)->next;
		free(*head);
	}
}
