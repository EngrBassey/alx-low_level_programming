#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at index
  * @head: the pointer to the list
  * @index: the position
  * Return: return 1 on succsse
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;

		i++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	prev->next = temp->next;
	free(temp);

	return (1);
}
