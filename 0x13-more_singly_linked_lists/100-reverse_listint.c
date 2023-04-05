#include "lists.h"

/**
  * reverse_listint -  function that reverses a listint_t linked list
  * @head: first head
  * Return: return head
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *forward = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		forward = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = forward;
	}

	*head = prev;

	return (*head);
}
