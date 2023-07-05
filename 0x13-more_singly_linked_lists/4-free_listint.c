#include "lists.h"

/**
  * free_listint - function that frees lists
  * @head: the lists
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next != NULL)
	{
		head = head->next;
		temp = head;
		free(temp);
	}
}
