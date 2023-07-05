#include "lists.h"

/**
  * free_listint - function that frees lists
  * @head: the lists
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
