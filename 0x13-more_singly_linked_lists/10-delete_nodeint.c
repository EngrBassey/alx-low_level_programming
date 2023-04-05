#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at a given index
  * @head: first node
  * @index: index value
  * Return: return 1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;

	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		prev = *head;
		*head = prev->next;
		free(prev);
		return (1);
	}

	prev = *head;

	for (i = 0; i < index - 1; i++)
	{
		prev = prev->next;
		if (prev->next == NULL)
		{
			return (-1);
		}
	}

	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);

}
