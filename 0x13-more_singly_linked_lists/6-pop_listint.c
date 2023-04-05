#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a linked list
  * @head: first node
  * Return: return n
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = tmp->next;
		n = tmp->n;
		free(tmp);
		tmp = NULL;
	}

	return (n);
}
