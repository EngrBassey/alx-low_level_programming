#include "lists.h"

/**
  * pop_listint - function that delete head
  * @head: the lists
  * Return: return head
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;

	n = temp->n;
	free(temp);

	return (n);
}
